#include <stdbool.h>
#include <string.h>

bool isValid(char* s) {
    // Stack to hold the opening brackets
    char stack[10000];  // Assume the string length is less than 10000
    int top = -1;  // Stack pointer

    // Traverse through the string
    for (int i = 0; s[i] != '\0'; i++) {
        char ch = s[i];

        // If the character is an opening bracket, push it to the stack
        if (ch == '(' || ch == '{' || ch == '[') {
            stack[++top] = ch;
        }
        // If the character is a closing bracket, check for a match
        else if (ch == ')' || ch == '}' || ch == ']') {
            // If stack is empty or top element doesn't match, return false
            if (top == -1) {
                return false;
            }
            char topChar = stack[top--];

            // Check if the top element matches the current closing bracket
            if ((ch == ')' && topChar != '(') ||
                (ch == '}' && topChar != '{') ||
                (ch == ']' && topChar != '[')) {
                return false;
            }
        }
    }

    // If stack is empty, all opening brackets have been matched
    return top == -1;
}
