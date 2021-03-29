/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    printf("Hello World!  \n");
    
    //Faça um programa que calcule e mostre a área de um círculo. Sabe-se que: área = π * R^2

    //input de dados
   int r;
   
   printf("Digite o raio de um círculo em metros: ");
   
   scanf("%d", &r);
   
   //cálculo da área
   double area;
   
   area = 3.14159265358979323846264338327950288419716939937510 * r * r;
   
   //output de dados
   
   printf("A área da circunferência é equivalente à %f metros quadrados.", area);
   
   
    return 0;
}
