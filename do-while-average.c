#include<stdio.h>
int main()
{
    int sum=0,number,count=0;
    do
    {
        scanf("%d",&number);
        if(number!=-1){
        count++;
        sum+=number;
        }
    }while(number!=-1);
    if(count!=0){
    printf("%.2f",(double)sum/count);
    }else{
        printf("0");
    }
    return 0;
}