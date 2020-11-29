#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[500], search, x, y;
    printf("enter the element\n");
    scanf("%d", &y);

    printf("enter the %d integer\n",y);

    for ( x = 0; x < y ; x++)
        scanf("%d",  &array[y]);
    printf("Enter the element to search\n");
    scanf("%d", &search);
    for (x = 0; x < y; x++)
    {
        if (array[x] == search)
        {
            printf("%d is print at location %d\n", search, x, y+1);
            break;
        }
    }
    return 0;
}
