#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int longestConsecutive(int arr[], int n) {
    if (n == 0) return 0;

    qsort(arr, n, sizeof(int), compare);  // Sort the array in O(n log n)

    int maxLen = 1, currLen = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) continue;  // Skip duplicates
        if (arr[i] == arr[i - 1] + 1) {
            currLen++;  // Increase the streak
        } else {
            maxLen = (currLen > maxLen) ? currLen : maxLen;
            currLen = 1;  // Reset streak
        }
    }

    return (currLen > maxLen) ? currLen : maxLen;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%d\n", longestConsecutive(arr, n));
    return 0;
}
