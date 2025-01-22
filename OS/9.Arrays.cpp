#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        // Step 1: Create the adjacency list and in-degree array
        vector<vector<int>> graph(numCourses);
        vector<int> inDegree(numCourses, 0);
        
        // Build the graph and in-degree array
        for (const auto& prereq : prerequisites) {
            int course = prereq[0];
            int prereqCourse = prereq[1];
            graph[prereqCourse].push_back(course);
            inDegree[course]++;
        }
        
        // Step 2: Initialize the queue with courses that have no prerequisites
        queue<int> q;
        for (int i = 0; i < numCourses; ++i) {
            if (inDegree[i] == 0) {
                q.push(i);
            }
        }
        
        // Step 3: Process the courses
        int processedCourses = 0;
        
        while (!q.empty()) {
            int course = q.front();
            q.pop();
            processedCourses++;
            
            // Decrease the in-degree of the dependent courses
            for (int nextCourse : graph[course]) {
                inDegree[nextCourse]--;
                if (inDegree[nextCourse] == 0) {
                    q.push(nextCourse);
                }
            }
        }
        
        // If the number of processed courses is equal to numCourses, return true
        return processedCourses == numCourses;
    }
};
