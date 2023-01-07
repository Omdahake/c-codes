#include <stdio.h>
int sum(int *a)
{
    int i, sum = 0;
    int size = sizeof(a);

    for (i = 0; i < size; i++)
    {
        sum = sum + a[i];
    }
    return sum;
}
void main()
{
    int a[4] = {1, 3, 2, 1};
    int b[4] = {2, 1, 2, 0};
    int c = 0, size = sizeof(a) / sizeof(a[0]);

    int flag = 1, t = 0, i, j;
    if (sum(a) == sum(b))
    {
        flag = 0;
        printf("sum is alredy eqal %d %d\n", sum(a), sum(b));
    }
    else
    {
        for (i = 0; i < size; i++)
        {
            for (j = 0; j < size; j++)
            {
                t = a[i];
                a[i] = b[j];
                b[j] = t;
                printf("a[%d]=%d   and  b[%d]=%d\n", i, a[i], j, b[j]);
                if (sum(a) == sum(b))
                {
                    printf("by swapping b[%d]=%d and a[%d]=%d\n", i,a[i],j, b[j]);
                    printf("sum is eqal %d %d\n", sum(a), sum(b));
                    flag = 0;
                    break;
                }
                t = a[i];
                a[i] = b[j];
                b[j] = t;
            }
            if (flag == 0)
                break;
        }
    }
    if (i == size)
    {
        printf("making eqal is not possible\n");
    }
}