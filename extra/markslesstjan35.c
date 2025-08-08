#include <stdio.h>
#include <conio.h>

int main() {
    int marks[]={8,98,62,25,35,45,78,15,34,74};

    for(int i=0;i<10;i++){
        if(marks[i]<=35){
            printf("%d\n", i);
        }
    }

    


    return 0;
}