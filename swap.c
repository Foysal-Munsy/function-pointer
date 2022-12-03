#include<stdio.h>
int *swap_index(int ara[],int a)
{
    int Q,x,y;
    scanf("%d",&Q);
    for(int i=1;i<=Q;i++)
    {
        scanf("%d %d",&x,&y);
        int temp=ara[x];
        ara[x]=ara[y];
        ara[y]=temp;
    }
    return ara;
}

int main()
{
    int N;
    scanf("%d",&N);

    int ara[100];
    for(int i=1;i<=N;i++)
        scanf("%d",&ara[i]);

    int* P=swap_index(ara,N);
    for(int i=1;i<=N;i++)
        printf("%d ",P[i]);

    return 0;
}
