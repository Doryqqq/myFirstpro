#include <stdio.h>
int main(){
    int x,reverse=0,count=0,temp;
    printf("输入x\n");
    scanf("%d",&x);
    while (x)//100
    {
        temp = x%10;//0//0//1
        reverse = reverse*10 + temp;//0//0//1
        x/=10;//10//1//0
        count++;//1//2//3跳出

    }
    printf("一共有%d位，逆序数是：%d\n",count,reverse);
return 0;
}