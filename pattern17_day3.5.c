#include<stdio.h>
int main()
{
    int i ,n;
    printf("enter any number\n");
    scanf("%d",&n);
int fact=1,sum=0,sum1,sum2;
for(i=1;i<=n;i++){
    fact=fact+i;
    sum=sum+(i/fact);
    sum1=sum+(i/fact);
    sum2=sum+sum1;
}
printf("sum is %d",sum2);
return 0;
}