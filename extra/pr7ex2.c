#include <stdio.h>
#include <conio.h>

int main() {
   int arr[8],cust;
   printf("enter numberr of customers %d:\n",cust);

   for(int i=0;i<=7;i++){
    printf("enter customer's user id by user :\n");
    scanf("%d",arr[i]);
   }

    return 0;
}