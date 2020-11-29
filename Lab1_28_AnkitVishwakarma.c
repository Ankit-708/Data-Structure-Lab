#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array [50], count,i;
    int max, second_max;

    printf("Enter number of element\n");
    scanf("%d",&count);

    printf("Enter %d number\n",count);
    for (i=0; i < count; i++)
    {
        scanf("%d",&array[i]);
    }
    max = second_max;
    for (i=0; i < count; i++)
    {
        if (array [i] > max)
            {
                second_max = max;
                max = array[i];
            }
            else if
                (array[i] > second_max && array[i] < max)
            {
           second_max = array[i];
            }
        }
    printf("second max element : %d%d" , second_max);
    return 0;
}
