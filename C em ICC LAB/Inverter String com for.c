#include <stdio.h>
#include <stdlib.h>

int main(){

    int i;
    int size;
    char string[100];
    //Não devo usar string[i] pq i = 0, ai pega o vetor como nulo e cancela a função.
    printf("Entre uma string: ");
    gets(string);

    for(i = 0; i <= string[i]; i++){
        printf("%c", string[i]);
        size++;
    }
    printf("\n\nA string invertida eh: ");
//Vamos inverter agora
    for(i = size; i >= 0; i--){
        printf("%c", string[i]);

    }





    return 0;
}
