#include<stdio.h>
#include<conio.h>
enum {PENDING=1,SHIPPED=2,DELIVERED=3,CANCLLED=4};
void main()
{
    int PENDING,SHIPPED,DELIVERED,CANCLLED,n;
    printf("PENDING=1\n SHIPPED=2\n DELIVERED=3\n CANCLLED=4\n");
    scanf("%d",&n);

    switch(n)
    {
    case 1:
        printf("PENDING");
        break;

    case 2:
        printf("SHIPPED");
        break;

    case 3:
        printf("DELIVERED");
        break;

    case 4:
        printf("CANCLLED");
        break;

    default:

        printf("enter the valid no");
    }
}