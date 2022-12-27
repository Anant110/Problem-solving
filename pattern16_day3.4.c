#include<stdio.h>
int main()
{
    int i ,n,x;
    printf("enter any number\n");
    scanf("%d",&n);
    printf("enter any number\n");
    scanf("%d",&x);
    int fact=1,sum=0,power=1,s=1;
for(i=1;i<=2*(n-1);i++){
    fact=fact*i;
   power=power*x;
//    sum=sum+((power/fact)*s);
//    s=s*(-1);
if(i%2!=0){
    sum=sum+((power/fact)*s);
    s=s*(-1);
}
}
printf("sum is %d",sum);
return 0;
}