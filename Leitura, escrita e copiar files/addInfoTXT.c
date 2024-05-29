#include <stdio.h>

int addinfo(FILE *file){
    file = fopen("string.txt", "a");
     if(file == NULL){
        printf("Arquivo nao pode ser aberto!\n");
        getchar();
        exit(0);
    }
    fprintf(file, "Primeira linha");
    char frase[] = "\nSegunda Linha";

    fputs(frase, file);

    return file;

}

int main(){
    FILE *file;

    file = addinfo(file);
    fclose(file);

    system("pause");
    return 0;
}
