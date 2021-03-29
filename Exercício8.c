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
    
    //Faça um programa que calcule e mostre a área de um triângulo. Sabe-se que: área = base*altura/2.

    //input de dados
    int b;
    int a;
    
    printf("Digite a base e a altura do triângulo em metros, respectivamente: ");
    
    scanf("%d %d", &b, &a);
    
    //cálculo da área
    double area;
    
    area = (b * a)/2;
    
    //output de dados
    
    printf("O valor da área do triângulo é de %f metros quadrados.", area);
    
    return 0;
}
