#include<stdio.h>
void reverse(char *);
void main()
{
    char name[10];
    printf("Enter string\n");
    scanf("%s",name);
    reverse(name);
    printf("%s",name);
}
void reverse(char *x){
    char *y,t;
    y=x;
    while(*y!='\0'){
        y++;
    }
    y--;
    while(y>x){
        t=*y;
        *y=*x;
        *x=t;
        x++;
        y--;
    }
}