#include <stdio.h>


int writeinfile(FILE *file){
    file = fopen("string.txt", "w");
     if(file == NULL){
       printf("Arquivo nao pode ser aberto!\n");
        getchar();
        exit(0);
    }

    fprintf(file,"FRASE PADRAO");
    return file;
}

int main(){
    FILE *file;

    file = writeinfile(file);
    fclose(file);

    system("pause");
    return 0;
}
