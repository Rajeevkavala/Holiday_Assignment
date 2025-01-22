#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c, d;
    
    // Taking input of four integers
    cin >> a >> b >> c >> d;
    
    // Finding the maximum among the four integers
    int result = max({a, b, c, d});
    
    // Output the result
    cout << result << endl;
    
    return 0;
}
