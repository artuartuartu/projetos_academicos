//Arthur Martins de Andrade - 22505291
#include <stdio.h>

int main(){

double salario, novoSalario, reajuste, faixa[8] = {0, 400.00, 400.01, 800.00, 800.01, 1200.00, 1200.01, 2000.00};
double perReajuste[5] = {15.00, 12.00, 10.00, 7.00, 4.00};
int percentual, i, j = 1, x = 0;
// i para faixa menor, j para faixa maior, x para percentual do reajuste
printf("Digite o salario do funcionario: \n");
scanf("%lf", &salario);

for(i = 0; i < 6;){
     if(salario >= faixa[i] && salario <= faixa[j]){
        novoSalario = (salario + (salario * (perReajuste[x] / 100)));
        reajuste = novoSalario - salario;
        percentual = perReajuste[x];
     }
     x += 1;
     i += 2;
     j += 2;
}
if(salario > faixa[j]){
    x += 1;
    novoSalario = (salario + (salario * (perReajuste[x] / 100)));
    reajuste = novoSalario - salario;
    percentual = perReajuste[x];
}    
printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %d %%\n", novoSalario, reajuste, percentual);
return 0;
}