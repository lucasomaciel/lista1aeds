/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    printf("Hello World!  \n");
    
    //Faça um programa que receba um número real e encontre e mostre a parte inteira deste número.

    //input de dados
    int numero_real;
    
    printf("Insira um número real qualquer: ");
    
    scanf("%d", &numero_real);

    //cálculo para tornar um número real em um número inteiro não é necessário
    
    //output de dados
    
    printf("A parte inteira deste número é equivalente à %d.", (int) numero_real);


    return 0;
}
