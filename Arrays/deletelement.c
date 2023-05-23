#include <stdio.h>
int main(){
    int n , i  , loc;
    printf("enter the length of array");
    scanf("%d" , &n);
    int A[n]; //declaring the array of element n
    printf("enter elements of the array");
    for(i=0 ; i<n ; i++){
    //taking input the elements of the array;
        scanf("%d" , &A[i]);
    }
    printf("enter the location you want to delete");
    scanf("%d" , &loc);

    for(i=loc ; i<n ; i++){
        A[i-1] = A[i];
    }
    n = n-1;
    for(i=0 ; i<n ; i++){
        printf("%d" , A[i]);
    }

}