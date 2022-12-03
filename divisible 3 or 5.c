#include<stdio.h>
int divisible_by3(int arr[], int n)
{
    int i,count=0;

    for(i=0; i<n; i++)
    {
        if(arr[i]%3==0)
            count++;
    }
    if(count>0)
        return count;
    else
        return -1;
}
int divisible_by5(int arr[], int n)
{
    int i,count=0;

    for(i=0; i<n; i++)
    {
        if(arr[i]%5==0)
        {
            if(arr[i]%3==0)
                continue;
            else
                count++;
        }
    }
    if(count>0)
        return count;
    else
        return -1;
}
int main()
{
    int n,ans,ans1;
    scanf("%d",&n);
    int ara[100];
    for(int i=1; i<=n; i++)
        scanf("%d",&ara[i]);
    ans=divisible_by3(ara,n);
    ans1=divisible_by5(ara,n);
    if((ans+ans1)>0)
        printf("%d\n",ans+ans1);
    else if(ans!=-1)
        printf("%d\n",ans1);
    else if(ans1!=-1)
        printf("%d\n",ans);

    return 0;

}
