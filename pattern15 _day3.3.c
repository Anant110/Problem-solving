#include<stdio.h>
int main()
{
    int i ,n,x,sum=1,fact=1,power=1;
    printf("enter any number\n");
    scanf("%d",&n);
    printf("enter any number\n");
    scanf("%d",&x);
for(i=1;i<=n;i++){
    fact=fact*i;
   power=power*x;
   sum=sum+(power/fact);
}
printf("sum is %d",sum);
return 0;
}