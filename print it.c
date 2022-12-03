#include<stdio.h>
void assign(int a,int b)
{
    int* ptrX=a;
    int* ptrY=b;
    printf("%d %d",*ptrX,*ptrY);

}

int main()
{
    int x,y;
    scanf("%d %d",&x,&y);

    assign(&x,&y);
    return 0;
}
