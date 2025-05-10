//Arthur Martins de Andrade - 22505291
#include <stdio.h>

int main(){

    double a, b, c, d, media, notaExame;

    printf("Digite as 4 notas: \n");
    scanf("%lf%lf%lf%lf", &a, &b, &c, &d);

    a *= 2;
    b *= 3;
    c *= 4;
    d *= 1;
    media = (a + b + c + d) / 10;

    printf("Media: %.1lf\n", media);

    if(media >= 7.0){
        printf("Aluno aprovado.\n");
    }
    if(media < 5.0){
        printf("Aluno reprovado.\n");
    }
    else{
        printf("Aluno em exame.\n");
        printf("Digite a nota do exame: \n");
        scanf("%lf", &notaExame);
        printf("Nota do exame: %.1lf\n", notaExame);

        media = (media + notaExame) / 2;
        if(media >= 5.0){
            printf("Aluno aprovado.\n");
        }
        else{
            printf("Aluno reprovado.\n");
        }
        printf("Final de media: %.1lf\n", media);
    }
    return 0;













}