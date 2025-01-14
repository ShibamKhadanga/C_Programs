#include <stdio.h>
void main() {
    int arr[1000], s, max, min;
    printf("Enter the no. of elements: ");
    scanf("%d",&s);
    for (int i=0; i<s; i++){
        printf("Enter %d element: ",i+1);
        scanf("%d",&arr[i]);
    }
    max = arr[0];
    min = arr[0];
    for (int i=0; i<s; i++){
        if (max<arr[i]){
            max = arr[i];
        }
        if (min>arr[i]){
            min = arr[i];
        }
    }
    printf("\nMaximum Value is: %d",max);
    printf("\nMinimum Value is: %d",min);
}