#include <stdio.h>
int main() {
    float nExame, notaP, media, n1, n2, n3; //aqui pedi para inserir as notas
    printf("Digite nota 1, 2, e 3:\n");
    scanf("%f %f %f", &n1, &n2, &n3);
    media = (n1 + n2 + n3) / 3; // calcular a media aritmetica 

    switch ((int)media) { //aqui transforma a media em inteiro e verificar se ela e 7, 8, 9 e 10
        case 10:
        case 9:
        case 8:
        case 7:
            printf("Voce foi aprovado. Sua media eh: %.2f\n", media); //se corresponder com os valores o aluno foi aprovado
            break;

        case 6: //se a media for 6, 5 e 4 ele esta em exame e tem como recuperar 
        case 5:
        case 4:
            nExame = (7 - media);
            notaP = nExame + 7;
            printf("Voce ficou em exame. A nota que precisa tirar eh: %.2f\n", notaP);
            break;

        default: 
            printf("Voce foi reprovado!!\n"); //se foi abaixo de 4 o aluno esta reprovado sem possibilidade fazer o exame, pois, nao tirou nota o suficiente 
    }
    return 0;
}
