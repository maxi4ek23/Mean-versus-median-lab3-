#include <stdio.h>
#include <stdlib.h>

int main()
{
    int NumberArrayElement;
    scanf("%d", &NumberArrayElement);
    if(NumberArrayElement % 2 == 0)
    {
    printf("get out");
    }
    else
    {
    int x;
    int array[NumberArrayElement];
    for(size_t i = 0;i <= NumberArrayElement - 1; i++)
    {
    scanf("%d", &x);
    array[i] = x;
    }
    int temp; //exchange variable
    for(size_t i = 0; i < NumberArrayElement - 1 ;i++)
    {
        for(size_t j = 0;j < NumberArrayElement - 1 - i;j++)
        {
            if(array[j] > array[j + 1])
            {
               temp = array[j];
               array[j] = array[j + 1];
               array[j + 1] = temp;
            }
        }
    }
    for(size_t i = 0;i < NumberArrayElement;i++)
    {
        printf("%d\n", array[i]);
    }
    int mid; //the number of the middle element of the array
    mid = NumberArrayElement/2;
    float median = array[mid];
    printf("median : %lf\n", median);
    float Mean;
    for (size_t j = 0; j <=NumberArrayElement-1; j++)
    {
        Mean += array[j];
    }
    Mean /= NumberArrayElement;
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