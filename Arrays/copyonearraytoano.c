#include <stdio.h>
int main(){
    int n , i ;
    printf("enter the length of array");
    scanf("%d" , &n);
    int A[n]; //declaring the array of element n
    int B[n];
    printf("enter elements of the array");
    for(i=0 ; i<n ; i++){
    //taking input the elements of the array;
        scanf("%d" , &A[i]);
    }
    printf("the elements of the new array are :");
    //printing the elements
    for(i=0 ; i<n ; i++){
        B[i] = A[i];
    }

    for(i=0 ; i<n ; i++){
        printf("%d" , A[i]);
    }
    return 0;
}