#include<stdio.h>
#include<math.h>
int main(){
    int r1, r2, c1, c2, arr1[100][100], arr2[100][100];
    printf("Enter no. of Row in arr1: ");
    scanf("%d",&r1);
    printf("Enter no. of Column in arr1: ");
    scanf("%d",&c1);
    printf("Enter no. of Row in arr2: ");
    scanf("%d",&r2);
    printf("Enter no. of Column in arr2: ");
    scanf("%d",&c2);

    
    int marr[r1][c2], s=0, i, j; 
    for(i=0; i<r1; i++){
        for(j=0; j<c1; j++){
            printf("Enter the no. at pos %d%d of arr1: ", i, j);
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("\n\n");

    for(i=0; i<r2; i++){
        for(j=0; j<c2; j++){
            printf("Enter the no. at pos %d%d of arr2: ", i, j);
            scanf("%d",&arr2[i][j]);
        }
    }
    printf("\n\n");


    //Matrix Addition Processes
    for (i=0; i<r1; i++){   
        s = 0;
        for(j=0; j<c2; j++){
            s = arr1[i][j] + arr2[i][j];
            marr[i][j] = s;
        }
    }


    // Loop to show the Matrix
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            printf("%d\t",arr1[i][j]);
        }
        printf("\t\t\t");
        for(int j=0; j<c2; j++){
            printf("%d\t",arr2[i][j]);
        }
        printf("\t\t\t");
        for(int j=0; j<c2; j++){
            printf("%d\t\t",marr[i][j]);
        }
        printf("\n");
    }
    
}