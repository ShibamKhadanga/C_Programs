//************************************   C program for implementation of selection sort
#include <stdio.h>

void selectionSort(int arr[], int n) {

    for (int i = 0; i < n - 1; i++) {

        //***************************    Find the minimum element in unsorted array
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }

        // Swap the found minimum element with the first
        // element in the unsorted part
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}

void main() {
    int arr[1000], n;
    printf("Enter No. of element: ");
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        printf("Enter Element at pos %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Unsorted array: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
  
      // Calling selection sort
    selectionSort(arr, n);

    printf("Sorted array: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
