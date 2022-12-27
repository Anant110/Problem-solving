#include<stdio.h>
int main()
{
int i,j,n;
printf("Enter any number\n");
scanf("%d",&n);
for(i=0;i<n;i++){
    printf("*");
}
printf("\n");
for(i=1;i<=n-2;i++){
    for(j=n-2;j>=1;j--){
        printf(" ");
    }
    printf("*");
    printf("\n");
}
for(i=1;i<=n;i++){
    printf("*");
}
return 0;
}