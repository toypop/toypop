#include <stdio.h>
#include <stdlib.h>

// 3. Create un programma che dato un numero intero positivo maggiore di zero dica se il numero è pari
// o dispari senza utilizzare la funzione modulo

int main(void){
    int numero;             //numero decimale inserito 

    printf("Inserisci numero: ");
    scanf("%d",&numero);
    while (getchar()!='\n'); 
    
    while(numero>0){
        numero-=2;
    }
    switch (numero)
    {
    case 0:
        printf("Il numero e\' pari!\n");
        break;
    
    default :
        printf("Il numero e\' dispari!\n");
        break;
    }

    return 0;
}