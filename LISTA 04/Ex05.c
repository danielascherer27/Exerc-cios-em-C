#include <stdio.h>

int main() {
    int c1, m1, c5, c10, c25, c50, n2, n5, n10, n20, n50, n100, n200, dinheiro, centavos, menu;
    
    printf("O seu valor possui centavos? (Digite 1 para sim e 2 para não.)\n");
    scanf("%d", &menu);

    switch (menu) {
        case 1:
            printf("Digite o valor apenas em reais:\n");
            scanf("%d", &dinheiro);
            printf("Digite os centavos desse valor:\n");
            scanf("%d", &centavos);

            n200 = dinheiro / 200; //
            n100 = (dinheiro - (n200 * 200)) / 100;
            n50 = (dinheiro - ((n200 * 200) + (n100 * 100))) / 50; 
            n20 = (dinheiro - ((n200 * 200) + (n100 * 100) + (n50 * 50))) / 20;
            n10 = (dinheiro - ((n200 * 200) + (n100 * 100) + (n50 * 50) + (n20 * 20))) / 10;
            n5 = (dinheiro - ((n200 * 200) + (n100 * 100) + (n50 * 50) + (n20 * 20) + (n10 * 10))) / 5;
            n2 = (dinheiro - ((n200 * 200) + (n100 * 100) + (n50 * 50) + (n20 * 20) + (n10 * 10) + (n5 * 5))) / 2;
            m1 = (dinheiro - ((n200 * 200) + (n100 * 100) + (n50 * 50) + (n20 * 20) + (n10 * 10) + (n5 * 5) + (n2 * 2)));

            c50 = centavos / 50;
            c25 = (centavos - (c50 * 50)) / 25;
            c10 = (centavos - ((c50 * 50) + (c25 * 25))) / 10;
            c5 = (centavos - ((c50 * 50) + (c25 * 25) + (c10 * 10))) / 5;
            c1 = (centavos - ((c50 * 50) + (c25 * 25) + (c10 * 10) + (c5 * 5)));

            if (n200 > 0) {
                printf("%d nota(s) de R$ 200.\n", n200);
            }
            if (n100 > 0) {
                printf("%d nota(s) de R$ 100.\n", n100);
            }
            if (n50 > 0) {
                printf("%d notas(s) de R$ 50.\n", n50);
            }
            if (n20 > 0) {
                printf("%d nota(s) de R$ 20.\n", n20);
            }        
            if (n10 > 0) {
                printf("%d nota(s) de R$ 10.\n", n10);
            }      
            if (n5 > 0) {
                printf("%d nota(s) de R$ 5.\n", n5);
            }
            if (n2 > 0) {
                printf("%d nota(s) de R$ 2.\n", n2);
            }
            if (m1 > 0) {
                printf("%d moeda(s) de R$ 1.\n", m1);
            }
        
            if (c50 > 0) {
                printf("%d moeda(s) de 50 centavos.\n", c50);
            }
            if (c25 > 0) {
                printf("%d moeda(s) de 25 centavos.\n", c25);
            }
            if (c10 > 0) {
                printf("%d moeda(s) de 10 centavos.\n", c10);
            }
            if (c5 > 0) {
                printf("%d moeda(s) de 5 centavos.\n", c5);
            }
            if (c1 > 0) {
                printf("%d moeda(s) de 1 centavo.\n", c1);
            }
            break;
        case 2: 
            printf("Digite o valor em reais:\n");
            scanf("%d", &dinheiro);
            
            n200 = dinheiro / 200;
            n100 = (dinheiro - (n200 * 200)) / 100;
            n50 = (dinheiro - ((n200 * 200) + (n100 * 100))) / 50;
            n20 = (dinheiro - ((n200 * 200) + (n100 * 100) + (n50 * 50))) / 20;
            n10 = (dinheiro - ((n200 * 200) + (n100 * 100) + (n50 * 50) + (n20 * 20))) / 10;
            n5 = (dinheiro - ((n200 * 200) + (n100 * 100) + (n50 * 50) + (n20 * 20) + (n10 * 10))) / 5;
            n2 = (dinheiro - ((n200 * 200) + (n100 * 100) + (n50 * 50) + (n20 * 20) + (n10 * 10) + (n5 * 5))) / 2;
            m1 = (dinheiro - ((n200 * 200) + (n100 * 100) + (n50 * 50) + (n20 * 20) + (n10 * 10) + (n5 * 5) + (n2 * 2)));
            
            if (n200 > 0) {
                printf("%d nota(s) de R$ 200.\n", n200);
            }
            if (n100 > 0) {
                printf("%d nota(s) de R$ 100.\n", n100);
            }
            if (n50 > 0) {
                printf("%d notas(s) de R$ 50.\n", n50);
            }
            if (n20 > 0) {
                printf("%d nota(s) de R$ 20.\n", n20);

            }
            
    }
    }