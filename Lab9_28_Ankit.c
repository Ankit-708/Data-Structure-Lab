#include <stdio.h>
int main()
{
    char s[] = "ashu";
    int len=0;
    char temp;
    while(s[len]!='\0'){
        len++;
    }
    printf("the length of this string is %d\n",len);
    for (int i = 0; i < (len-1)/2; i++)
    {
        temp = s[i];
        s[i] = s[len-1-i];
        s[len-1-i] = temp;
    }
    printf("String is %s", s);
    return 0;
}
