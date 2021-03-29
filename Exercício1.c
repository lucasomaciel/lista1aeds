#include <stdio.h>

int main()
{
    printf("Hello World!  \n");
    
    //Determinar a soma e a média de 3 números entrados pelo teclado.
    
    //input de dados
    int a;
    int b;
    int c;
    
    printf("Digite 3 números: ");
    
    scanf("%d %d %d", &a, &b, &c);
    
    //cálculo da soma
    double soma;
    
    soma = (a + b + c);
    
    //cálculo da média
    double media;
    
    media = (a + b + c)/3.0;
    
    //output de dados
    
    printf("A soma de %d, %d e %d é %.2f \n", a, b, c, soma);
    
    printf("A média de %d, %d e %d é %.2f", a, b, c, media);
    
    return 0;
}