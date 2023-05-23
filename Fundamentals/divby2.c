#include <stdio.h>
//program to check if a number is divisible by 2 or not
//same program is also run for odd or evenb   
int main()

{
    int x;
    printf("enter number;");
    scanf("%d", &x);
    printf("%d", x % 2 == 0);
    return 0;
}