//Exercice 1

#include <stdio.h>

int main(void)
{

  int a,b,resultat;
  char op;

  printf("Entrer un nombre\n");
  scanf("%d",&a);
  while(getchar()!='\n');
  printf("Entrer un autre nombre \n");
  scanf("%d",&b);
  while(getchar()!='\n');
  printf("Entrer l'operateur\n");
  scanf("%c",&op);
  while(getchar()!='\n');
  
  switch (op) {
    case '+' : resultat = a + b; break;
    case '-' : resultat = a - b; break;
    case '*' : resultat = a * b; break;
    case '/' : resultat = a / b; break;
    case '%' : resultat = a % b; break;
    default  : printf("Erreur d'operateur ou de donnees!\n");
  }

  printf("a %c b = %d \n",op,resultat);
  return 0;
}
