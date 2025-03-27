#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int i=0;
    int idx=0;
    while(i<n-1){
        int min=arr[i];
        for(int j=i+1;j<n;j++){
            if(arr[j]<=min){
                min=arr[j];
                idx=j;
            }
        }
        int temp=arr[idx];
        arr[idx]=arr[i];
        arr[idx]=temp;
        i++;
        idx=i;
    }
    vector<bool> present(n + 1, false); // Track presence of numbers in range [1, n]

    // Mark numbers that are within range
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0 && arr[i] <= n) {
            present[arr[i]] = true;
        }
    }
    for (int i = 1; i <= n; i++) {
        if (!present[i]) {
            return i;
        }
    }
    
}