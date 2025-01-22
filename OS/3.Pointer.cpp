#include <iostream>
#include <cmath> // For absolute function
using namespace std;

int main() {
    int a, b;
    
    // Taking input
    cin >> a >> b;
    
    // Using pointers to hold the addresses of a and b
    int *ptr_a = &a;
    int *ptr_b = &b;
    
    // Calculating sum and absolute difference
    int sum = *ptr_a + *ptr_b;
    int diff = abs(*ptr_a - *ptr_b); // Using abs to get the absolute difference
    
    // Output the results
    cout << sum << endl;
    cout << diff << endl;
    
    return 0;
}
