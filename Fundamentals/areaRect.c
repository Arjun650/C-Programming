#include <stdio.h>
int main(){
    int len , bre;
    printf("enter length");
    scanf("%d" , &len);
    printf("enter breadth");
     scanf("%d" , &bre);
     int area = len *bre;
     int perimeter = 2 * (len+bre);
    printf("the area of rectangle is %d \n" , area);
    printf("the perimeter is %d" , &perimeter);
}