#include<stdio.h>
int xstrlen(char *);
void main()
{
char name[10];
int length;
printf("Enter string");
scanf("%s",name);
length=xstrlen(name);
printf("%d",length);
int xstrlen(char *p){
    int count=0;
    while(*p!='\0'){
        p++;
        count++;
    }
    return(count);
}
}

//