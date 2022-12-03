#include<stdio.h>
#include<string.h>
void desc_sort(char S[])
{
    int i,j,temp;
    int len=strlen(S)-1;
    for(j=0; j<len; j++)
    {
        for(i=0; i<len; i++)
        {
            if(S[i]>=65 && S[i]>=90)
            {
                if(S[i]<S[i+1])
                {
                    temp=S[i];
                    S[i]=S[i+1];
                    S[i+1]=temp;
                }
            }
        }
    }
     printf("%s", S);
}
int main()
{
    char str[100];
    scanf("%s",str);
    desc_sort(str);
    return 0;
}
