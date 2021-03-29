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
    
    //Faça um programa para calcular e mostrar o salário reajustado de um funcionário. O aumento deve ser de 10%. O programa recebe um número real e retorna a o valor reajustado.
    
    //input de dados
    int salario_atual;
    
    printf("Digite o seu salário atual: ");
    
    scanf("%d", &salario_atual);
    
    //cálculo do salário reajustado
    double salario_ajustado;
    double reajuste_salarial;
    
    salario_ajustado = salario_atual * 1.10;
    reajuste_salarial = salario_atual * 0.10;
    
    //output de dados
    
    printf("O valor do seu salário reajustado é %.2f, após um reajuste no valor de %.2f.", salario_ajustado, reajuste_salarial);
    
    return 0;
}
    