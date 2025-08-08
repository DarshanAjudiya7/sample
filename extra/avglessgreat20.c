#include <stdio.h>
#include <conio.h>

int main() {
    // int lower,greater,marks[20]={48,59,36,48,25,47,15,25,36,25,89,78,48,95,43,61,25,14,74,57} ; 
    // int lower,greater,marks[20];

    int lower,greater,marks[5];
    marks[0] = 58;
    marks[1] = 57;
    marks[2] = 98;
    marks[3] = 15;
    marks[4] = 75;

    

    for(int i = 0 ; i < 20 ; i++){

        
        // printf("enter %d marks:",i+1);
        // scanf("%d",&marks[i]);
        
        lower = marks[i];

        if(marks[i+1]<=lower){
            
            printf("your marks is lower plz word hard.");
        }
        else{
            printf("you are better than your friend.");
        }



    }

   


    return 0;
}