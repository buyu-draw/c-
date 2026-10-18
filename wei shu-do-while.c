#include<stdio.h>
int main()
{
    int x,count=0;
    scanf("%d",&x);
    do
    {
        count++;
        x/=10;
    }while(x!=0);
    printf("这是%d位数",count);
    return 0;
}