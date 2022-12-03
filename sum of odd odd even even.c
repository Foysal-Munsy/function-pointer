#include<stdio.h>
int sum_of_even_odd_index(int arr[], int n)
{
    int i, sum1 = 0,sum2 = 0,total=0;
    for (i = 1; i <=n; i++)
    {
        if (arr[i] % 2 == 0 && i%2==0)
            sum1 += arr[i]+i;
        if (arr[i] % 2 != 0 && i % 2 != 0)
            sum2 += arr[i]+i;
    }
    total= sum1+sum2;
    return total;
}
int main()
{
    int n,ans;
    scanf("%d",&n);
    int ara[100];
    for(int i=1;i<=n;i++)
        scanf("%d",&ara[i]);
    ans=sum_of_even_odd_index(ara,n);
    printf("%d",ans);
    return 0;
}
