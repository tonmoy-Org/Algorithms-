#include <stdio.h>
int main() {
    int arr[] = {6, 9, 3, 4, 2, 1, 5, 7, 8};
    int n = 9;
    int even_start = 0;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            int temp = arr[even_start];
            arr[even_start] = arr[i];
            arr[i] = temp;
            even_start++;
        }
    }
    
    for (int i = 0; i < even_start - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < even_start; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
            int temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
    }
    
    for (int k = 0; k < n; k++) {
        printf("%d ", arr[k]);
    }
    printf("\n");
    return 0;
}
