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
    
    //Faça um programa que receba o valor de um depósito e o valor da taxa de juros, calcule e mostre o valor do rendimento e o valor total depois do rendimento.
    
    //input de dados
    int deposito;
    int juros;
    
    printf("Digite o valor do depósito e em seguida, a taxa de juros: ");
    
    scanf("%d %d", &deposito, &juros);
    
    //cálculo do rendimento e do valor total
    double rendimento;
    double vt;
    
    rendimento = deposito * juros/100;
    vt = deposito + rendimento;
    
    //output de dados
    
    printf("O rendimento total é equivalente à %2.f. Consequentemente, o valor total do depósito após o rendimento é de %2.f.", rendimento, vt);
    
    return 0;
}
