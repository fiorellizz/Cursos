#include <stdio.h>
#include <stdlib.h>

void lermapa(char mapa[][10+1]){
    FILE* f;
    f = fopen("mapa.txt", "r");
    if (f == 0){
        printf("Erro na leitura do mapa!");
        exit(1);
    }
    
    for (int i = 0; i < 5; i++){    
        fscanf(f, "%s", mapa[i]);   
    }

    fclose(f);

    for (int i = 0; i < 5; i++)
    {
        printf("%s\n", mapa[i]);
    }
    
}

int main() {

    char mapa[5][10+1];

    lermapa(mapa);

    return 0;
}