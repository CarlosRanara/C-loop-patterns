#include <stdio.h>

void makeSquare()
{
    int i = 0, j,lines = 4;
    
    while(i < lines)
    {
        j = 0; 
        while(j < lines)
        {
            printf("*");
            j++;        
        }

        printf("\n");
        i++;
    }
}

void makeRevstairs()
{
    int i = 0, j,lines = 4;
    
    while(i < lines)
    {
        j = i; 
        while(j < lines)
        {
            printf("*");
            j++;        
        }

        printf("\n");
        i++;
    }
}

void makePyramid() {
    int i = 0, j, k, lines = 5;

    while (i < lines) {
        // Reset k for each row
        k = 0;  
        
        // Loop for spaces
        while (k < i) {
            printf(" ");
            k++;
        }

        // Loop for stars
        j = i; 
        while (j < lines) {  
            printf("* ");
            j++;        
        }

        printf("\n");
        i++;
    }
}

    

int main(){

makeSquare();
printf("\n");
makeRevstairs();
printf("\n");
makePyramid();

return 0;
}
