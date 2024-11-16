#include <stdio.h>

void rightTriangle(int lines)
{
    int i = 0, j = 0;
    for(i = 0; i < lines; i++)
    {   
        for(j = 0; j <= i; j++)
        {
           printf("*");
        }
        printf("\n");
    }
}

void leftTriangle(int lines)
{
    int i = 0, lines = 5, j = 0, a = 0;
    for(i = 0; i < lines; i++)
    {   
    
        for(a = 1; a < lines - i; a++)
        {
            printf(" ");
        }
        for(j = 0; j <= i; j++)
        {
           printf("*");
        }
        printf("\n");
    }
}

void ramaNigga(int lines)
{
    int i = 0, lines = 5, j = 0, a = 0;
    for(i = 0; i < lines; i++)
    {   
    
        for(a = 1; a < lines - i; a++)
        {
            printf(" ");
        }
        for(j = 0; j < 2*i+1 ; j++)
        {
           printf("*");
        }
        printf("\n");
    }
} 
int main(){
int lines;
scanf("%d", &lines);

rightTriangle(lines);
printf("\n");
leftTriangle(lines);
printf("\n");
ramaNigga(lines);

return 0;
}
