#include <stdio.h>
int main(){
    int dia,mes,ano;
    printf("Digite o dia atual:\n"); // aqui pede os dados de entrada... 
    scanf("%i",&dia);
    printf("Digite o mes atual:\n");
    scanf("%i",&mes);
    printf("Digite o ano atual: (entre 1900 a 2100.)\n");
    scanf("%i",&ano);
    if (ano>2100 || ano<1900) // Aqui verifica se o ano esta nos paremetro.
    {
        printf("Digite um ano valido.");
        return 0;
    }
    switch (mes) //aqui a variavel mes e verifica cada dia que o usario pode escolher contando de 1 a 31.
    {
    case 1:
        if (dia>31 || dia<1)
        {
            printf("Digite um dia valido.");
            return 0;
        }
        printf("Passou %i dias do ano",dia);
        break;
    case 2:
        if (dia>28 || dia<1)
        {
            printf("Digite um dia valido.");
            return 0;
        }
        printf("Passou %i dias do ano",dia+31);
        break;
    case 3:
        if (dia>31 || dia<1)
        {
            printf("Digite um dia valido.");
            return 0;
        }
        printf("Passou %i dias do ano",dia+59);
        break;
    case 4:
        if (dia>30 || dia<1)
        {
            printf("Digite um dia valido.");
            return 0;
        }
        printf("Passou %i dias do ano",dia+90);
        break;
    case 5:
        if (dia>31 || dia<1)
        {
            printf("Digite um dia valido.");
            return 0;
        }
        printf("Passou %i dias do ano",dia+120);
        break;
    case 6:
        if (dia>30 || dia<1)
        {
            printf("Digite um dia valido.");
            return 0;
        }
        printf("Passou %i dias do ano",dia+151);
        break;
    case 7:
        if (dia>31 || dia<1)
        {
            printf("Digite um dia valido.");
            return 0;
        }
        printf("Passou %i dias do ano",dia+181);
        break;
    case 8:
        if (dia>31 || dia<1)
        {
            printf("Digite um dia valido.");
            return 0;
        }
        printf("Passou %i dias do ano",dia+212);
        break;
    case 9:
        if (dia>30 || dia<1)
        {
            printf("Digite um dia valido.");
            return 0;
        }
        printf("Passou %i dias do ano",dia+243);  
        break; 
    case 10:
        if (dia>31 || dia<1)
        {
            printf("Digite um dia valido.");
            return 0;
        }
        printf("Passou %i dias do ano",dia+273);
        break;
    case 11:
        if (dia>30 || dia<31)
        {
            printf("Digite um dia valido.");
            return 0;
        }
        printf("Passou %i dias do ano",dia+304);
        break;
    case 12:
        if (dia>31 || dia<1)
        {
            printf("Digite um dia valido.");
            return 0;
        }
        printf("Passou %i dias do ano",dia+334);
        break;
    
    default: printf("Digite um mes valido.");
        break;
    }
   return 0;
}
