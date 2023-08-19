#include<stdio.h>

int main(){

    /*Dadas as medidas de uma sala, informe sua área.*/

    float largura, comprimento; /*pra mostrar os centimetros */ 

    //entrada de dados

    printf("Digite a largura");
    scanf("%f", &largura);

    printf("Digite o comprimeto");
    scanf("%f", &comprimento);

    //calcular a  area

    area = largura * comprimento;

    //apresenta a saida
    printf("A area da sla e: %f", area);

    return 0;


}