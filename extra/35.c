#include <stdio.h>
#include <conio.h>

int main() {
    int arr[2],roll[2]; 

    for(int i=0;i<3;i++){
        printf("\nroll number of student:");
        scanf("%d",&roll[i]);
        printf("enter %d marks:\n",i+1);
        scanf("%d", &arr[i]);

        if(arr[i]<=35){
            printf("its roll number : %d",roll[i]);
            

        }

        else{
            printf("you are passed.");
        }
    }

    


    return 0;
}