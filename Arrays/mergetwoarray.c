#include <stdio.h>
int main(){
    int n , i , m , j , temp;
    printf("enter length of array");
    scanf("%d" , &n);
    int A[n];
    m = n;
    int B[m];
    printf("enter elements of first array");
    for(i=0 ; i<n ; i++){
        scanf("%d" , &A[i]);
    }
    
    printf("enter elements of second array");
    for(i=0 ; i<n ; i++){
        scanf("%d" , &B[i]);
    }
    
    int o = m+n;
    int C[o];
    for( i=0 ; i<n ; i++){
        C[i] = A[i];    //copying elements for first array
    }
    
    for(int K=n , j=0  ; K<o , j<n ; K++ , j++){
        C[K] = B[j];
    }      // copying for second array
    
    
    
    for(i=0 ; i<o ; i++){
        for(j=i+1 ; j<o ; j++){
            if(C[i]<C[j]){
                temp = C[i];
                C[i]=C[j];
                C[j]= temp;
            }
        }
    }
    
    for(i=0 ; i<o ; i++){
        printf("%d" , C[i]);
    }
    
}
