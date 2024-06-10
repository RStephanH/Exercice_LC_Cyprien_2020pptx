//Exercice 2 

#include <stdio.h>

int main(void)
{
  char car;

  printf("Entrer le caractere d'appreciation : \n");
  car=getchar();

  switch (car) {
    case 'A' : printf("Excellent !\n");break;
    case 'B' : printf("Bon\n");break;
    case 'C' : printf("Moyen\n");break;
    case 'D' : printf("Mediocre\n");break;
    case 'E' : printf("Mauvais\n");break;
    default  : printf("Erreur d'entrer de caractere!\n");
  }
  return 0;
}
