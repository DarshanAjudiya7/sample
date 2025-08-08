#include<stdio.h>

int main(){

int num, f = 1, i = 1;
printf("Enter number:");
scanf("%d",&num);

while(i<=num){
    f = f * i;
    i++;
}
printf("value of f is:%d", f);
}