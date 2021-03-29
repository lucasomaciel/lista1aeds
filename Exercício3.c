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
    
    //Faça um programa retornar a raiz quadrada de um número
    
    //input de dados
    int a;
    
    printf("Digite um número: ");
    
    scanf("%d", &a);
    
    //cálculo da raiz quadrada
    double raiz_quadrada;
    
    raiz_quadrada = sqrt(a);
    
    //output de dados
    
    printf("A raiz quadrada de %d é %f.", a, raiz_quadrada);
 
    return 0;
}
    