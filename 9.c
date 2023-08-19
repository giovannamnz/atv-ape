#include<stdio.h>

main (){
    //Escreva um algoritmo para ler o salário mensal atual de um funcionário e o percentual de reajuste. Calcular e escrever o valor do novo salário.

    //variaveis

    float salarioAtual, porcentagemReajuste, novoSlario;

    printf ("Digite o salario atual");
    scanf("%lf", &salarioAtual);

    printf ("Digite a porcentagem de reajuste");
    scanf("%lf", &porcentagemReajuste);

    reajusteFinal = porcentagemReajuste/100;

    /calcular o novo salario
    
    novoSalario = (salarioAtuaL * reajusteFinal) + salarioAtual;

    printf("Novo salario: R$%.2f", novoSalario);


}