#include <stdio.h>


int lerdadosstring(FILE *file){
     char frase[100];
     file = fopen("string.txt", "r");
     if(file == NULL){
        printf("Arquivo nao pode ser aberto!\n");
        getchar();
        exit(0);
    }
    while(fgets(frase, 100, file) != NULL){
        printf("%s\n", frase);

    }


    return file;
}



int main(){
    FILE *file;

    file = lerdadosstring(file);

    fclose(file);

    system("pause");
    return 0;
}
