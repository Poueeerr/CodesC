#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char str1[15];
    char str2[15];

    printf("Digite a string 1: \n");
    gets(str1);
    printf("Digite a string 2: \n");
    gets(str2);

    if(strcmp(str1,str2)==0){
        printf("\nStrings iguais");
    }
    else{
        printf("s1 = %s\n", str1);
        printf("s2 = %s\n", str2);
        strcat(str1, " ");
        strcat(str1, str2);
        printf("\ns%s", str1);
    }

  return 0;
}
