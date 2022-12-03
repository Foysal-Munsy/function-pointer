#include<stdio.h>
int even_sum(int x,int t)
{
    int A=(x-12)/4;

    int A1=A;
    int A2=A1+2;
    int A3=A2+2;
    int A4=A3+2;

    printf("%d %d %d %d\n",A1,A2,A3,A4);

}

int main()
{
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d",&n);
        even_sum(n,t);
    }

    return 0;
}
