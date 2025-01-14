//*************************************   C program for implementation of selection sort
#include <stdio.h>
void selectionSort(int arr[], int N) {
    for (int i = 0; i < N - 1; i++) { 
        //******************************  Find the minimum element in unsorted array
        int min = i;
        for (int j = i + 1; j < N; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }

        //*****************************   Swap the found minimum element with the first element in the unsorted part
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }

    printf("Sorted array: \n");
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void main() {
    int arr[1000];
    printf("Enter No. of element: ");
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        printf("Enter Element at pos %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    int N = sizeof(arr) / sizeof(arr[0]);
    printf("Unsorted array: \n");
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    selectionSort(arr, N);
}
