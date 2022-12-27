#include<stdio.h>
int main()
{
int i,j;
for(i=0;i<=5;i++){
    for(j=70-i;j<=69;j++){
        printf("%c",j);
    }
    printf("\n");
}
return 0;
}