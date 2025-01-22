#include <stdio.h>

void findOddAndEven(int* nums, int numsSize, int* even, int* odd, int* evenSize, int* oddSize) {
    *evenSize = 0;
    *oddSize = 0;
    
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] % 2 == 0) {
            even[*evenSize] = nums[i];
            (*evenSize)++;
        } else {
            odd[*oddSize] = nums[i];
            (*oddSize)++;
        }
    }
}

int main() {
    int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int numsSize = 9;
    int even[numsSize], odd[numsSize];
    int evenSize, oddSize;
    
    findOddAndEven(nums, numsSize, even, odd, &evenSize, &oddSize);
    
    printf("Even numbers: ");
    for (int i = 0; i < evenSize; i++) {
        printf("%d ", even[i]);
    }
    printf("\n");
    
    printf("Odd numbers: ");
    for (int i = 0; i < oddSize; i++) {
        printf("%d ", odd[i]);
    }
    printf("\n");
    
    return 0;
}
