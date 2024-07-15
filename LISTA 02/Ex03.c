 #include<stdio.h>
int main(){
  int n1, n2, ad, sub, div, mult;
  printf("\nDigite o primeiro numero inteiro:\n");
  scanf("%i", &n1);
  printf("\nDigite o segundo numero inteiro:\n");
  scanf("%i", &n2);
  ad=n1+n2;
  sub=n1-n2;
  mult=n1*n2;
  div=n1/n2;
  printf("\nA soma dos dois numeros eh: %d\n", ad);
  printf("\nA subtracao dos dois numeros eh: %d\n", sub);
  printf("\nA multiplicacao dos dois numeros eh: %d\n", mult);
  printf("\nA divisao dos dois numeros eh: %d\n", div);

  return 0;
}