#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand(time(0));
    int number=rand()%100+1;
    int count=0;
    int a=0;
    printf("我已经想好了一个数字");
    do
    {
    scanf("%d",&a);
    count++;
    if(count==10){
        printf("已经用完了所有次数，正确的数字是%d/n",number);
        break;
    }
    if(a>number){
        printf("太大了/n");
    }else if(a<number){
        printf("太小了/n");
    }else{
        printf("用了%d次就猜对了/n",count);
    }
    }while(a!=number);
    return 0;
}