//Exercice 3

#include <stdio.h>

int main(void){

    int nbe,nbesp;
    char car;
    nbe=0;
    nbesp=0;

    printf("Entrer une suite de caractere :\n");
    while((car=getchar())!='\n'){
        if(car == 'e'){
            nbe+=1;
        }
        else if(car == ' '){
            nbesp+=1;
        }
    }
    printf("le nombre de la lettre e = %d \n",nbesp);
    printf("le nombre d'espace = %d\n",nbesp);
    return 0;
}
