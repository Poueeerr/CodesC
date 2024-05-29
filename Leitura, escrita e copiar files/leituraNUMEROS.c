#include <stdio.h>


int lerdados(FILE *file){
    int x;
    file = fopen("numero.txt", "r");
     if(file == NULL){
        printf("Arquivo nao pode ser aberto!\n");
        getchar();
        exit(0);
    }

    while(fscanf(file, "%d", &x) != EOF){
        printf("%d\n", x);
    }

    return file;
}



int main(){
    FILE *file;

    file = lerdados(file);

    fclose(file);

    system("pause");
    return 0;
}
