#include <stdio.h>
#include <conio.h>

int main() {
    int num,n=0,r,sum; 

    printf("Enter a number: ");
    scanf("%d", &num);

    while(n!=0){
        r=num%10;
        sum+=pow(r,3);
        num/=10;


    }
    if(sum=num){
        printf("number is armstrong");
        }

        else{
            printf("number is not armstrong");
        }


    return 0;
}

// remainder = originalNum % 10;
//         result += pow(remainder, n);
//         originalNum /= 10;