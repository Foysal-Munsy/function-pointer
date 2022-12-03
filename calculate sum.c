#include <stdio.h>
int sum_and_diff_of_series(int n, int ara[])
{
    int sum=0;
    for (int i = 1; i <= n; i++)
        ara[i] = 0;
    for (int i = 1; i <= n; i++)
    {
        if (ara[i] == 0)
        {
            ara[i + 3] = (i + 3) * (-1);
            sum = sum + i;
        }

        else if (ara[i] != 0)
            sum = sum + ara[i];
    }
    return sum;

}
int main()
{
    int n,ans = 0;
    int ara[100];
    scanf("%d", &n);

    ans= sum_and_diff_of_series(n,ara);
    printf("%d\n", ans);

    return 0;
}
