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
    int i = 0, j = 0, a = 0;
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
    int i = 0, j = 0, a = 0;
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

void invRight(int lines)
{
    int i = 0, j = 0;
    for(i = 0; i < lines; i++)
    {   
        for(j = 0; j < lines - i; j++)
        {
           printf("*");
        }
        printf("\n");
    }
}

void invLeft(int lines)
{
    int i = 0, j = 0, a = 0;
    for(i = 0; i < lines; i++)
    {   
        for(a = 0; a < i; a++)
        {
            printf(" ");
        }        
        for(j = 0; j < lines - i; j++)       
        {
            printf("*");        
        }
        printf("\n");
    }
}

void revNigga(int lines)
{
    int i = 0, j = 0, a = 0;
    for(i = 0; i < lines; i++)
    {   
    
        for(a = 0; a <= i; a++)
        {
            printf(" ");
        }
        for(j = 0; j < 2*(lines-i)-1 ; j++)
        {#include <stdio.h>
/* sum of all integers 1 to 1000*/ 
int main ()
{
  int i=0;
 
  for ( i = 1; i != 0; i++) 
     printf("%d ", i);
  
  return 0;
}
           printf("*");
        }
        printf("\n");
    }
} 

void makeRhombus(int lines)
{
    int i = 0, j = 0, k = 0;
    for(i = 0; i < lines; i++)
    {   
       for(k = 0; k < lines - i - 1; k++)
        {
            printf(" ");
        }
       for(j = 0; j < lines; j++)
        {
            printf("* ");
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
printf("\n");
invRight(lines);
printf("\n");
invLeft(lines);
printf("\n");   
revNigga(lines);
printf("\n");
makeRhombus(lines);
printf("\n");
return 0;
}
