#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    
    // Input the strings
    cin >> a >> b;
    
    // Print the lengths of the strings
    cout << a.length() << " " << b.length() << endl;
    
    // Concatenate and print the strings
    cout << a + b << endl;
    
    // Swap the first characters and print the results
    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    
    cout << a << " " << b << endl;
    
    return 0;
}
