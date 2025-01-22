#include <stdio.h>
#include <stdlib.h>

// Function prototype (declaration) for findMissingAndRepeated
int* findMissingAndRepeated(int** grid, int n, int* returnSize);

int main() {
    // Example grid
    int grid[2][2] = {{1, 3}, {2, 2}};
    int* gridPtrs[2] = {grid[0], grid[1]}; // Pointers for the 2D grid
    int returnSize;

    // Call the function
    int* result = findMissingAndRepeated(gridPtrs, 2, &returnSize);

    // Print the result
    printf("Repeated: %d, Missing: %d\n", result[0], result[1]);

    // Free the result memory
    free(result);

    return 0;
}

// Function definition for findMissingAndRepeated
int* findMissingAndRepeated(int** grid, int n, int* returnSize) {
    // Expected sum and sum of squares
    long long T = (long long)n * n * (n * n + 1) / 2;
    long long T2 = (long long)n * n * (n * n + 1) * (2 * n * n + 1) / 6;

    // Actual sum and sum of squares
    long long S = 0, S2 = 0;

    // Flatten the grid and calculate sums
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int val = grid[i][j];
            S += val;
            S2 += (long long)val * val;
        }
    }

    // Calculate differences
    long long diff1 = S - T;   // Repeated - Missing
    long long diff2 = S2 - T2; // Repeated^2 - Missing^2

    // Solve the equations:
    // (repeated - missing) = diff1
    // (repeated + missing) = diff2 / diff1
    long long sum = diff2 / diff1; // (repeated + missing)
    long long repeated = (sum + diff1) / 2;
    long long missing = repeated - diff1;

    // Allocate result array
    int* result = (int*)malloc(2 * sizeof(int));
    result[0] = (int)repeated;
    result[1] = (int)missing;
    *returnSize = 2;

    return result;
}
