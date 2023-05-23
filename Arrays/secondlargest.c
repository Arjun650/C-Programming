#include <stdio.h>
int main(){
    int n , temp , i , j ;
    printf("enter the length of array");
    scanf("%d" , &n);
    int A[n]; //declaring the array of element n
    printf("enter elements of the array");
    for(i=0 ; i<n ; i++){
    //taking input the elements of the array;
        scanf("%d" , &A[i]);
    }
    for(i=0 ; i<n ; i++){
        for(j= i+1 ; j<n ; j++){
            if(A[i] > A[j]){
            temp = A[i];
            A[i]=A[j];
            A[j] = temp;
            }
        }
    }
      if(A[n-1]==A[n-2])
        printf("%d" , A[n-3]);

      else
      printf("The Second Largest element is %d" , A[n-2]);
  
return 0;
}