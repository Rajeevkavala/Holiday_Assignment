#include <stdio.h>
#include <stdlib.h>

// Comparison function for qsort
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int findKthSmallest(int* nums, int numsSize, int k) {
    // Sort the array
    qsort(nums, numsSize, sizeof(int), compare);
    // Return the Kth smallest element
    return nums[k - 1];  // 1-based index, hence k-1
}

int main() {
    int nums[] = {3, 2, 1, 5, 6, 4};
    int numsSize = 6;
    int k = 2;
    
    int result = findKthSmallest(nums, numsSize, k);
    printf("The %dth smallest element is: %d\n", k, result);

    return 0;
}

