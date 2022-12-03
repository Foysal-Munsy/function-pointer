#include<stdio.h>
int is_prime(int x)
{
    if(x==1)
        return 0;
    for(int i=2; i<x; i++)
    {
        if(x%i==0)
            return 0;
    }
    return 1;
}
double is_even(int arr[],int n)
{
    double sum,avg;
    int i,count=0;
    for (i = 0; i <n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            sum +=arr[i];
            count++;
        }
    }
    avg=(sum/count);
    return avg;
}

int main()
{
    int i, n,count=0;
    scanf("%d",&n);

    int ara[101];
    for(i=0; i<n; i++)
        scanf("%d",&ara[i]);

    for(i=0;i<n;i++)
    {
        int prime= is_prime(ara[i]);
        if(prime==1)
            count++;
    }
    printf("Prime numbers: %d\n",count);
    printf("Average of all even integers: %.2lf\n",is_even(ara,n));
    return 0;
}
