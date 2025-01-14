#include<stdio.h>
void sort(int arr[],int s);
void main(){
    int arr[1000], s;
    printf("Enter No. of Elements:- ");
    scanf("%d",&s);
    for(int i=0; i<s; i++){
        printf("Enter %d element: ", i+1);
        scanf("%d",&arr[i]);
    }
    printf("\n\n\nGiven Array is: ");
    for (int i=0; i<s; i++){
        printf("%d      ",arr[i]);
    }
    sort(arr,s);
}

void sort(int arr[], int s){
    int z;
    for (int i=0; i<s-1; i++){
        for (int j=0; j<s-i-1; j++){
            if(arr[j]>arr[j+1]){
                z = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = z;
            }
        }
    }
    printf("\n\n\n\nSorted Array is: ");
    for (int i=0; i<s; i++){
        printf("%d      ",arr[i]);
    }
}