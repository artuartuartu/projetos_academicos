//Arthur Martins de Andrade - 22505291
//Segundo exercício
#include <stdio.h>

int main(){

    char nome_vendedor[20];
    double salario_fixo, valor_vendas, salario_final;

    printf("Digite o nome do vendedor, seu salario fixo e o valor total de vendas feitas por ele: \n");
    scanf("%s%lf%lf", &nome_vendedor, &salario_fixo, &valor_vendas);

    salario_final = (salario_fixo + valor_vendas * (15.00 / 100.00));

    printf("TOTAL = R$ %.2lf\n", salario_final);

    return 0;
}