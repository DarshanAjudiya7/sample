#include <stdio.h>

int main() {
    int num, sum = 0, r;
      
    printf("Enter an integer: ");
    scanf("%d", &num);
       
    while (num != 0) {
        r = num % 10;  
        sum = sum * 10 + r; 
        num /= 10;  
    }
    
    printf("Reversed number: %d\n", sum);
}
