#include<stdio.h>
#include<string.h>
char keyboard_press(char a[])
{
    int i;
    int len=strlen(a);
    for (i=0; i<len; i++)
    {
        if (i%2!=0)
            printf("%c%c",a[i],a[i]);
        if (i%2==0)
            printf("%c",a[i]);
    }
}
int main()
{
    char s[101];
    fgets(s,sizeof(s),stdin);
    keyboard_press(s);
    return 0;
}
