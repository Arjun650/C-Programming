#include <stdio.h>
int main(){
    int n , i ;
    printf("enter the length of array");
    scanf("%d" , &n);
    int A[100]; //declaring the array of element n
    printf("enter elements of the array");
    for(i=0 ; i<n ; i++){
    //taking input the elements of the array;
        scanf("%d" , &A[i]);
    }
     
     int loc ;
     int ele;
     printf("enter location of the new element ");
     scanf("%d" , &loc);
     printf("enter element to be inserted");
     scanf("%d" , &ele);
        // loc = loc-1;

    for(i=n ; i>=loc ; i--){
         A[i] = A[i-1];
    }

    n = n+1 ; 
    A[loc-1] = ele;

    for(i=0 ; i<n ; i++){
        printf("%d" , A[i]);
    }
    

}