#include<stdio.h>
#include<math.h>
void main(){
    int marr[3][3], s=0, i, j; 
    int arr2[3][3]={{1,4,7},{2,5,8},{3,6,9}};
    int arr1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    
    for (i=0; i<3; i++){   
        for(j=0; j<3; j++){
            s = 0;
            for(int k=0; k<3; k++){
                s += arr1[i][k] * arr2[k][j];
            }
            marr[i][j] = s;
        }
    }

    
    // Loop to show the Matrix
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d\t",arr1[i][j]);
        }
        printf("\t\t\t");
        for(int j=0; j<3; j++){
            printf("%d\t",arr2[i][j]);
        }
        printf("\t\t\t");
        for(int j=0; j<3; j++){
            printf("%d\t",marr[i][j]);
        }
        printf("\n");
    }
}