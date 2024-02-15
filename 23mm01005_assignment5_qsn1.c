#include<stdio.h>
int main()
{
    int n;
    printf("Enter number ");
    scanf("%d",&n);
    int counter=0,sum=0;
    int digit,temp=n;
    static int check[10];
    while(temp>0)
    {
        digit=temp%10;
        temp/=10;
        check[digit]++;
        if(check[digit]<=1)
            sum+=digit;
        counter++;
    }
    printf("\n%d",counter);
    printf("\n%d",sum);
    return 0;
}