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
    
    //Faça um programa que receba quatro números inteiros, calcule e retorne a soma destes números
    
    //input de dados
    int a;
    int b;
    int c;
    int d;
    
    printf("Digite quatro números: ");
    
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    //cálculo da soma
    double soma;
    
    soma = a + b + c + d;
    
    //output de dados
    
    printf("A soma de %d, %d, %d e %d é igual a %2.f.", a, b, c, d, soma);

    return 0;
}
