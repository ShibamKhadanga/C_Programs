#include<stdio.h>
#include<math.h>
void search(int arr[], int x, int l, int h);
void main(){
    int arr[1000], s, x, l, h;
    printf("Enter No. of Elements:- ");
    scanf("%d",&s);
    for(int i=0; i<s; i++){
        printf("Enter %d element: ", i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter element want to search: ");
    scanf("%d",&x);
    l = 0;
    h = s;
    search(arr,x,l,h);
}

void  search(int arr[], int x, int l, int h){
    int z=0,m;
    while (l<=h){
        m = (l+h)/2;
        if (x==arr[m]){
            z=1;
            break;
        }
        if(x>arr[m]){
            l=m+1;
        }
        else{
            h = m-1;
        }
    }
    if (z!=0){
        printf("\n\n\n*****************   Element found at position:- %d ******************\n\n\n",m+1);
    }
    else{
        printf("\n\n\n*****************    Element not found    ****************************\n\n\n");
    }
}