#include <stdio.h>
int main(){
    int n , i ;
    printf("enter the length of array");
    scanf("%d" , &n);
    int A[n]; //declaring the array of element n
    printf("enter elements of the array");
    for(i=0 ; i<n ; i++){
    //taking input the elements of the array;
        scanf("%d" , &A[i]);
    }
    printf("the elements of the array are :");
    int sum =0 ;
    for(i=0 ; i<n ; i++){
        sum = sum+A[i];
    }

        printf("%d" , sum);
}