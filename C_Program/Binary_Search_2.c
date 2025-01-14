#include<stdio.h>
#include<math.h>

int search(int arr[], int x, int l, int h);

int main() {
    int arr[1000], s, x;
    printf("Enter No. of Elements:- ");
    scanf("%d", &s);
    for(int i=0; i<s; i++) {
        printf("Enter %d element: ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("Enter element want to search: ");
    scanf("%d", &x);
    int result = search(arr, x, 0, s-1);
    if (result == -1)
        printf("\n\n\n*****************   Element not found ******************\n\n\n");
    else
        printf("\n\n\n*****************   Element found at position:- %d ******************\n\n\n", result+1);
    return 0;
}

int search(int arr[], int x, int l, int h) {
    if (l <= h) {
        int m = l + (h - l) / 2;
        if (arr[m] == x)
            return m;
        if (arr[m] > x)
            return search(arr, x, l, m-1);
        return search(arr, x, m+1, h);
    }
    return -1;
}