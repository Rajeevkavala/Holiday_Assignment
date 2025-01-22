#include <iostream>
#include <string>
using namespace std;

int main() {
    int a, b;
    
    // Read the input values for a and b
    cin >> a >> b;
    
    // Loop through the range [a, b]
    for (int n = a; n <= b; ++n) {
        if (n >= 1 && n <= 9) {
            // Print the English word for numbers 1-9
            switch (n) {
                case 1: cout << "one" << endl; break;
                case 2: cout << "two" << endl; break;
                case 3: cout << "three" << endl; break;
                case 4: cout << "four" << endl; break;
                case 5: cout << "five" << endl; break;
                case 6: cout << "six" << endl; break;
                case 7: cout << "seven" << endl; break;
                case 8: cout << "eight" << endl; break;
                case 9: cout << "nine" << endl; break;
            }
        } else {
            // If n > 9, check if it's even or odd
            if (n % 2 == 0) {
                cout << "even" << endl;
            } else {
                cout << "odd" << endl;
            }
        }
    }

    return 0;
}
