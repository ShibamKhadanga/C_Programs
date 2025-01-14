#include<stdio.h>
void insrt(int arr[], int n);

void main(){
    int arr[1000], n, var;
    printf("Enter No. of element: ");
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        printf("Enter Element at pos %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    insrt(arr, n);

}

void insrt(int arr[], int n){
    //**************************  INSERTION SORT DECLARATION
    int var;
    for (int i=1; i<n; i++){
        var=arr[i];
        for (int j=i-1; j>=0 && arr[j]>var; j--){
            arr[j+1]=arr[j];
            arr[j]=var;
        }
    }
    printf("\n\n");
    for (int i=0; i<n; i++){
        printf("\t %d", arr[i]);
    }
     printf("\n\n");
}