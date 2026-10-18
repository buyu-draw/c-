#include<stdio.h>
int main()
{
    int sum=0,number,count=0;
    scanf("%d",&number);
    while(number!=-1){
    count++;
    sum+=number;
    scanf("%d",&number);
    }
    if(count!=0){
    printf("%f",1.0*sum/count);
    }else{
        printf("0");
    }
    return 0;
}
