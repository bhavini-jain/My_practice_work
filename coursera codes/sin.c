#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    float r;
    int i;
    char ch;
    clrscr();
    printf("- - - - - - - - - - - - - - - - - -");
    printf("\nAngle \t Sin \t Cos \t \n");
    printf("- - - - - - - - - - - - - - - - - -");
    for(i = 0 ; i <= 180 ; i = i + 30)
    {
        r = i * 3.14159 / 180;
        printf("\n%3d \t %5.2f \t %5.2f \t %5.2f\n", i, sin(r), cos(r));
    }
    printf("- - - - - - - - - - - - - - - - - -");
    getch();
}