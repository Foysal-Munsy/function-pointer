#include <stdio.h>
int is_beatiful_or_not(int a[], int n)
{
    int count=0,half=n/2;
    int *arr = &a[0];
    for(int i=0; i<n; i++)
    {
        int num = *(arr+i);
        while(num > 0)
        {
            if(num%10==7)
                count++;

            num/=10;
        }
    }
    if(count >= half)
        return 1;
    else
        return 0;
}
int main()
{
    int n, i;
    scanf("%d",&n);
    int ara[101];
    for(i=0; i<n; i++)
        scanf("%d",&ara[i]);
    int decision = is_beatiful_or_not(ara, n);
    if(decision==1)
        printf("Beautiful\n");
    else
        printf("Ugly\n");
    return 0;
}

