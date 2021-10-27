#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    if(n % 2 == 0)
    {
    printf("get out");
    }
    else
    {
    int x;
    int array[n];
    for(int i = 0;i <= n - 1; i++)
    {
    scanf("%d", &x);
    array[i] = x;
    }
    int q;
    for(int r = 0; r < n - 1 ;r++)
    {
        for(int j = 0;j < n - 1 - r;j++)
        {
            if(array[j] > array[j + 1])
            {
               q = array[j];
               array[j] = array[j + 1];
               array[j + 1] = q;
            }
        }
    }
    for(int i = 0;i < n;i++)
    {
        printf("%d\n", array[i]);
    }
    int t = n/2;
    float median = array[t];
    printf("median : %lf\n", median);
    float Mean;
    for (int j = 0; j <=n-1; j++)
    {
        Mean += array[j];
    }
    Mean = Mean / n;
    printf("Mean :%lf\n", Mean);

    if(Mean > median)
    {
        printf("Mean");
    }
    else if(Mean < median)
    {
        printf("median");
    }
    else
    {
        printf("same");
    }
    }
return 0;
}
