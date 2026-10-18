#include<stdio.h>
int main()
{
    int x,count=0;
    printf("请输入一个正整数：\n");
    scanf("%d",&x);
   while(x>0){
       count++;
       x/=10;
   }
   if(count==0){
       printf("位数为1");
   }else{
   printf("位数为%d",count);
   }
    return 0;
}