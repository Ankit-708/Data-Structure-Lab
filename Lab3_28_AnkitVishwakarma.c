#include <stdio.h>
#include <stdlib.h>

long gcd(long,long);
int main()
{
    long x, y, hcf,lcm;

    printf("Enter two integr\n");
    scanf("%ld%ld", &x,&y);

    hcf = gcd (x, y);
    lcm = (x*y)/hcf;

    printf("greatet common divior of %ld and %ld = %ld\n", x, y, hcf);
    printf("least common multiple of %ld and %ld = %ld\n", x, y, lcm);
    return 0;
}
long gcd (long x, long y)
{
    if (x == 0)
    {
        return y;
    }
    while (y !=0)
    {
        if (x > y)
            x = x - y;
        else
            y = y-x;
    }
    return x;
}
