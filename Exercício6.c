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
    
    //Faça um programa que receba o salário base de um funcionário, calcule e mostre o salário a receber, sabendo-se que o funcionário tem gratificação de 5% sobre o salário base e paga imposto de 7% também sobre o salário base
    
    //input de dados
    int salario;
    
    printf("Digite o seu salário: ");
    
    scanf("%d", &salario);
    
    //cálculo da bonificação, dos impostos e do salário a receber
    double bonificacao;
    double impostos;
    double salario_a_receber;
    
    bonificacao = 0.05 * salario;
    impostos = 0.07 * salario;
    salario_a_receber = salario + bonificacao - impostos;
    
    //output de dados
    
    printf("O salário a receber possui o valor de %.2f. Os valores da gratificação e dos impostos são, respectivamente, de %2.f e %2.f.", salario_a_receber, bonificacao, impostos);
    
    
    return 0;
}
