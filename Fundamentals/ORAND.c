#include <stdio.h>
#include <math.h>
// if it's sunday & it's snowing

int main(){
    int isSunday = 1;
    int isMonday=0;
    int isSnowing =1;
    printf("%d\n", isSunday && isSnowing);
    printf("%d\n", isMonday || isSnowing);
    return 0;
}