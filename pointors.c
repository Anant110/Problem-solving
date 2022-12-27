#include<stdio.h>
int main()
{
    // int b=10;
    // int *p;
    // p=&b;
    //p=b;//not valid
    // printf("%d\n",b);
    // printf("%d\n",*p);
    // printf("%d\n",p);
    // printf("%d",&b);
    // int a[]={2,6,5,3,5};
    // int *p;
    // p=a;//it is valid in array
    // printf("%d",p);
    // printf("%d",a);
    int a[5],i;
    int *p=a;
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++){
        printf("%d",a[i]);
    }
    
return 0;
}