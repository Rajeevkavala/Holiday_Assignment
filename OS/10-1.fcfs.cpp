#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Process {
    int pid;    // Process ID
    int bt;     // Burst Time
    int wt;     // Waiting Time
    int tat;    // Turnaround Time
};

void findWaitingTime(vector<Process>& processes) {
    processes[0].wt = 0; // Waiting time for the first process is always 0
    for (int i = 1; i < processes.size(); i++) {
        processes[i].wt = processes[i - 1].bt + processes[i - 1].wt;
    }
}

void findTurnaroundTime(vector<Process>& processes) {
    for (int i = 0; i < processes.size(); i++) {
        processes[i].tat = processes[i].bt + processes[i].wt;
    }
}

void findAverageTime(vector<Process>& processes) {
    int total_wt = 0, total_tat = 0;
    for (int i = 0; i < processes.size(); i++) {
        total_wt += processes[i].wt;
        total_tat += processes[i].tat;
    }
    
    int n = processes.size();
    cout << "Average Waiting Time: " << (float)total_wt / n << endl;
    cout << "Average Turnaround Time: " << (float)total_tat / n << endl;
}

void FCFS(vector<Process>& processes) {
    if (processes.empty()) {
        cout << "No processes to schedule!" << endl;
        return;
    }
    
    findWaitingTime(processes);
    findTurnaroundTime(processes);
    findAverageTime(processes);
    
    cout << "Process ID\tBurst Time\tWaiting Time\tTurnaround Time\n";
    for (int i = 0; i < processes.size(); i++) {
        cout << processes[i].pid << "\t\t" << processes[i].bt << "\t\t" 
             << processes[i].wt << "\t\t" << processes[i].tat << endl;
    }
}

int main() {
    int n;
    cout << "Enter number of processes: ";
    cin >> n;

    // Handle edge case if no processes are entered.
    if (n <= 0) {
        cout << "Number of processes must be greater than 0." << endl;
        return 1; // Exit with error code.
    }

    vector<Process> processes(n);
    
    for (int i = 0; i < n; i++) {
        processes[i].pid = i + 1;
        cout << "Enter burst time for process " << i + 1 << ": ";
        cin >> processes[i].bt;
    }
    
    FCFS(processes);
    
    return 0;
}
