#include <stdio.h>


int main(){
    void copiar(FILE *file1, FILE *file2);
    FILE *file1 = fopen("txtParaCopiar.txt", "r");
     if(file1 == NULL){
       printf("Arquivo nao pode ser aberto!\n");
        getchar();
        exit(0);
    }
    FILE *file2 = fopen("txtCOPIADO.txt", "w");
    copiar(file1, file2);
    fclose(file1);
    fclose(file2);

    return 0;
}

void copiar(FILE *file1, FILE *file2){

    char leitor[1000];
    while(fgets(leitor, 1000, file1) !=NULL){
        fputs(leitor, file2);
    }
}
