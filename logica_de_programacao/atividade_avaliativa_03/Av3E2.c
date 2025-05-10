//Arthur Martins de Andrade - Rm: 22505291
#include <stdio.h>
#include <stdbool.h>

int main(){

    double N;
    int i, notas;
    double quantidade[12] = {100.00, 50.00, 20.00, 10.00, 5.00, 2.00, 1.00, 0.50, 0.25, 0.10, 0.05, 0.01};
    bool incorreto = true;


    printf("Digite o valor: \n");
    scanf("%lf", &N);
    
    while(incorreto){
    if (0 <= N && N <= 1000000.00){
          
        printf("NOTAS: \n");
    
            for (i = 0; i < 6; i++){
                notas = N / quantidade[i];

                if (notas < 1){
                    printf("0 nota(s) de R$ %.2lf\n", quantidade[i]);
                     continue;
        }
                N = N - (notas * quantidade[i]);

                printf("%d nota(s) de R$ %.2lf\n", notas, quantidade[i]);
            }
        
        printf("MOEDAS: \n");

        for (i = 6; i <= 11; i++){
            notas = N / quantidade[i];

            if (notas < 1){
                printf("0 moeda(s) de R$ %.2lf\n", quantidade[i]);
                continue;
            }
            N = N - (notas * quantidade[i]);

            printf("%d moeda(s) de R$ %.2lf\n", notas, quantidade[i]);
        }
        incorreto = false;    
    }
    
        else{
            printf("Insira um valor entre 0 e 1000000\n"); 
            scanf("%lf", &N);
        } 
       
    }
    return 0;
}