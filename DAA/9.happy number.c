#include <stdbool.h>


int sumOfSquaresOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }
    return sum;
}

bool isHappy(int n) {
  
    int seen[1000] = {0}; 
    while (n != 1) {
        n = sumOfSquaresOfDigits(n);
        
       
        if (seen[n]) {
            return false;
        }
        
      
        seen[n] = 1;
    }
    return true;
}
