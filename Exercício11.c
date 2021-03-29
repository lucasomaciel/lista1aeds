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
    
    //Pedro comprou um saco de ração com peso em quilos. Ele possui 2 gatos, para os quais fornece
    //a quantidade de ração em gramas. A quantidade diária de ração fornecida para cada gato é
    //sempre a mesma. Faça um programa que receba o peso do saco de ração e a quantidade de ração
    //fornecida para cada gato, calcule e mostre quanto restará de ração no saco após 5 dias.

    //input de dados
    int total_racao;
    int racao_diaria;
    
    printf("Insira em kilogramas quanto de ração você possui, e quanto um de seus gatos consome por dia: ");
    
    scanf("%d %d", &total_racao, &racao_diaria);
    
    //cálculo de alocação de ração
    double consumido;
    double restante;
    
    consumido = total_racao / (5 * (2 * racao_diaria));
    restante = total_racao - consumido;
    
    //output de dados
    
    printf("Após 5 dias, sobraram %2.f kilogramas de ração.", restante);


    return 0;
}
