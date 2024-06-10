//Exercice 4

#include <stdio.h>

int main(void){

    int achat,sommedue,paye,remise;
    sommedue=0;
    paye=0;
    remise=0;

    do
    {
      printf("Entrer le montant en Ariary de l'achat:\n");
      scanf("%d",&achat);
      if(achat<0){
        printf("Erreur de saisie du valeur d'achat!\n");
        return 1;
      }
      else if(achat > 0){
        sommedue+=achat;
      }
    }
    while(achat != 0);

    printf("Entrer la somme que le client paye :\n");
    scanf("%d",&paye);
    if(paye < sommedue){
      printf("Ereur\n");
    }
    else if(paye >= sommedue){
      remise=paye-sommedue;
      printf("Le montant de la monnaie = %d Ariary\n",remise);
    }
    else {
      printf("Ereur\n");
    }
    return 0;
}
