#include<stdio.h>
int main()
{
    int i ,n;
    printf("enter any number\n");
    scanf("%d",&n);
int fact=1,sum=0;
for(i=1;i<=n;i++){
    fact=fact+i;
    sum=sum+fact;
}
printf("sum is %d",sum);
return 0;
}