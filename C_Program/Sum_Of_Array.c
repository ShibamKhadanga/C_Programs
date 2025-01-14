#include<stdio.h>
int sumofarray(int arr[],int s);
void main(){
    int s, i, arr[1000];
    printf("Enter no. of element: ");
    scanf("%d",&s);
    for(i=0;i<s;i++){
        printf("Enter %d element: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nSum of array is %d",sumofarray(arr,s));
}
int sumofarray(int arr[ ], int s){
    int z=0, i;
    for (i=0;i<s;i++){
        z=z+arr[i];
    }
    return z;
}