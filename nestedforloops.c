#include <stdio.h>


void makePyramid()
{
    int i = 0, j, k, lines;
    scanf("%d",&lines);
    for(i = 0; i < lines; i++)
    {    
         for (k = 0; k < i; k++)
         {
           printf(" ");
         }
         for (j = i; j < lines; j++)
         {
           printf("* ");
         }
         printf("\n");
    }
        
}

void aaa()
{
    char c1, c2, c3;
    
    for(c1 = 'A'; c1 <= 'Z'; c1++)
        for(c2 = 'A'; c2 <= 'Z'; c2++)
            for(c3 = 'A'; c3 <= 'Z'; c3++)
                printf("%c%c%c\n",c1,c2,c3);
}
    

int main(){

//makePyramid();
printf("\n");
aaa();
return 0;
}
