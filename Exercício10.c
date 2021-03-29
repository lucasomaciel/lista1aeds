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
    
    //Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre a idade dessa pessoa e quantos anos ela terá em 2050.

    //input de dados
    int ano_nascimento;
    int ano_atual;
    
    printf("Digite o ano que você nasceu e o ano atual: ");
    
    scanf("%d %d", &ano_nascimento, &ano_atual);
    
    //cálculo da idade atual e da idade em 2050
    double idade_atual;
    double idade_cinquenta;
    
    idade_atual = ano_atual - ano_nascimento;
    idade_cinquenta = 2050 - ano_nascimento;
    
    //output de dados
    
    printf("Você possui, atualmente, %0.f anos. Em 2050, você terá %0.f.", idade_atual, idade_cinquenta);

    return 0;
}
