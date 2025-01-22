#include <iostream>
using namespace std;

// Recursive function to calculate a^b
int power(int a, int b) {
    // Base case: a^0 is 1
    if (b == 0) {
        return 1;
    }
    // Recursive case: a^b = a * a^(b-1)
    return a * power(a, b - 1);
}

int main() {
    int a, b;
    cin >> a >> b;
    
    // Call the recursive function and print the result
    cout << power(a, b) << endl;

    return 0;
}
