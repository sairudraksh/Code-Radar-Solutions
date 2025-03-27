
#include <stdio.h>

void rotateArray(int arr[], int n, int k) {
    // Adjust k to handle cases where k > n or k < 0
        k = k % n;
            if (k < 0) {
                    k = k + n;
                        }

                            // Reverse the entire array
                                for (int i = 0, j = n - 1; i < j; i++, j--) {
                                        int temp = arr[i];
                                                arr[i] = arr[j];
                                                        arr[j] = temp;
                                                            }

                                                                // Reverse the first k elements
                                                                    for (int i = 0, j = k - 1; i < j; i++, j--) {
                                                                            int temp = arr[i];
                                                                                    arr[i] = arr[j];
                                                                                            arr[j] = temp;
                                                                                                }

                                                                                                    // Reverse the remaining n-k elements
                                                                                                        for (int i = k, j = n - 1; i < j; i++, j--) {
                                                                                                                int temp = arr[i];
                                                                                                                        arr[i] = arr[j];
                                                                                                                                arr[j] = temp;
                                                                                                                                    }
                                                                                                                                    }

                                                                                                                                    int main() {
                                                                                                                                        int n, k;

                                                                                                                                            scanf("%d", &n);

                                                                                                                                                int arr[n];
                                                                                                                                                    for (int i = 0; i < n; i++) {
                                                                                                                                                            scanf("%d", &arr[i]);
                                                                                                                                                                }

                                                                                                                                                                    scanf("%d", &k);

                                                                                                                                                                        rotateArray(arr, n, k);

                                                                                                                                                                            for (int i = 0; i < n; i++) {
                                                                                                                                                                                    printf("%d", arr[i]);
                                                                                                                                                                                            if (i < n - 1) {
                                                                                                                                                                                                        printf(" ");
                                                                                                                                                                                                                }
                                                                                                                                                                                                                    }
                                                                                                                                                                                                                        printf("\n");

                                                                                                                                                                                                                            return 0;
                                                                                                                                                                                                                            }

                                                                                                                                                                                                                            