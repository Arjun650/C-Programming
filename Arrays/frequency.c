#include <stdio.h>
int main()
{
    int n, i, j;
    printf("enter size");
    scanf("%d", &n);
    int A[n], B[n], count;

    for (i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    for (i = 0; i < n; i++)
    {
        B[i] = A[i];
    }
    for (int i = 0; i < n; i++)
    {
        count = 0;
        for (j = 0; j < n; j++)
        {
            if (A[i] == B[j])
            {
                count = count + 1;
                B[j] = 0;
            }
        }
        if (count > 0)
        {
            printf(" the number of %d is %d \n", A[i], count);
        }
    }
}
