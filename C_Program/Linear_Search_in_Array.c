#include <stdio.h>
void search(int arr[], int s, int x);
void main(){
    int arr[1000], s, x;
    printf("Enter No. of Elements:- ");
    scanf("%d",&s);
    for(int i=0; i<s; i++){
        printf("Enter %d element: ", i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter element want to search: ");
    scanf("%d",&x);
    search(arr,s,x);
}

void  search(int arr[], int s, int x){
    int z = 0;
    int i;
    for (i=0; i<s; i++){
        if(arr[i]==x){
            z = 1;
            break;
        }
    }
    if(z==0){
        printf("\n\n\n***************** Element not found ****************************\n\n\n"); 
    }
    else{
        printf("\n\n\n*****************   Element found at position:- %d ******************\n\n\n",i+1);
    }
}