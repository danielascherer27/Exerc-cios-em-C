#include <stdio.h>
int main(){
    int codigo, valortotal=0, quantidade=0, continuar;
    float desconto, valorCD;
    for (int sent=1;sent==1;){
        printf("\nMEDICAMENTOS\n");
        printf("1) Paracetamol - R$ 10.00\n");
        printf("2) Ibuprofeno - R$ 15.00\n");
        printf("3) Omeprazol - R$ 20.00\n");
        printf("4) Loratadina - R$ 12.00\n");
        printf("0) Sair\n");
        printf("\nDigite o codigo do medicamento:\n");
        scanf("%i",&codigo);
        if (codigo==1){
            printf("\nDigite a quantidade:\n");
            scanf("%i",&quantidade);
            valortotal=10;   
            for (int cont = 1; cont<quantidade; cont++){
                valortotal=valortotal+valortotal;
            }
            desconto=valortotal*0.10;
            valorCD=valortotal-desconto;
            printf("\nValor total com 10%% de desconto: R$ %.2f",valorCD);
            sent=0;
        }else if (codigo==2){
            printf("\nDigite a quantidade:\n");
            scanf("%i",&quantidade);
            valortotal=15;
            for ( int cont = 1; cont<quantidade; cont++){
                valortotal=valortotal+valortotal; 
            }
            desconto=valortotal*0.10;
            valorCD=valortotal-desconto;
            printf("\nValor total com 10%% de desconto: R$ %.2f",valorCD);
            sent=0;
        }else if (codigo==3){
            printf("\nDigite a quantidade:\n");
            scanf("%i",&quantidade);
            valortotal=20;
            for ( int cont = 1; cont<quantidade; cont++){
                valortotal=valortotal+valortotal; 
            }
            desconto=valortotal*0.10;
            valorCD=valortotal-desconto;
            printf("\nValor total com 10%% de desconto: R$ %.2f",valorCD);
            sent=0;
        }else if (codigo==4){
            printf("\nDigite a quantidade:\n");
            scanf("%i",&quantidade);
            valortotal=12;
            for ( int cont = 1; cont<quantidade; cont++){
                valortotal=valortotal+valortotal; 
            }
            desconto=valortotal*0.10;
            valorCD=valortotal-desconto;
            printf("\nValor total com 10%% de desconto: R$ %.2f",valorCD);
            sent=0;
        }else if (codigo==0){
            printf("\nVocê saiu!");
            sent=0;
        }else{
            printf("\nDigite um código válido!\n");
        }   
    }
    return 0;
}
