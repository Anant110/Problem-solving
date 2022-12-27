#include<stdio.h>
int main(){

int i,j;
for(i=1;i<=6;i++){
for(j=7-i;j>=1;j--){
    if(i==1&&j==7-i){
        continue;
        printf("%d",j);
    }
}
}
return 0;
}
