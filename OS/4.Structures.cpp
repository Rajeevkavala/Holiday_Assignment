#include <iostream>
#include <string>
using namespace std;

// Define the structure for Student
struct Student {
    int age;
    string first_name;
    string last_name;
    int standard;
};

int main() {
    // Create an instance of Student
    Student student;
    
    // Read the input data
    cin >> student.age;
    cin >> student.first_name;
    cin >> student.last_name;
    cin >> student.standard;
    
    // Output the student's details in the required format
    cout << student.age << " " << student.first_name << " " << student.last_name << " " << student.standard << endl;
    
    return 0;
}
