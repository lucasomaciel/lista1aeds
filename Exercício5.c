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
    
    //Faça um programa que calcule três notas e seus respectivos pesos, calcule e mostre a média ponderada.
    
    //input de dados
    int a;
    int b;
    int c;
    int aa;
    int bb;
    int cc;
    
    printf("Digite suas três notas e em seguida, seus respectivos pesos: ");
    
    scanf("%d %d %d %d %d %d", &a, &b, &c, &aa, &bb, &cc);
    
    //cálculo da média ponderada
    double media_ponderada;
    
    media_ponderada = ((a * aa) + (b * bb) + (c * cc))/(aa + bb+ cc);
    
    //output de dados
     printf("A média ponderada das notas é igual a %2.f.", media_ponderada);

    return 0;
}
