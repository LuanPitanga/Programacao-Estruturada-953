#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h>
#define tam 10

float i, j, vet, vet2;

main(){
    setlocale(LC_ALL, "Portuguese");
    int i,vet2[10], j;
    float vet[10], soma;

    srand(time(NULL));
    //lendo 5 vetores
    for(i = 0; i < 5; i++){
        printf("\n\n-------------------%dº VETOR---------------------\n\n", i+1);
           //lendo 10 valores para cada vetor
           for(j = 0; j < tam; j++){
               vet[j] = rand() % 100;
               printf("%.1f ", vet[j]);

               vet2[j]=(int)vet[j];
            if(vet2[j]%2 == 0)
             soma += vet[j];
        }
    }
    float somar_valores(){

    for(i = 0; i < 5; i++){
           for(j = 0; j < tam; j++){
               vet2[j]=(int)vet[j];
            if(vet2[j]%2 == 0)
             soma += vet[j];
        }
    }
    printf("\nSOMA = %.1f", somar_valores());
    float somar_valores()
{
    for(i = 0; i < 5; i++){
           for(j = 0; j < tam; j++){
               vet2[j]=(int)vet[j];
            if(vet2[j]%2 == 0)
             soma += vet[j];
        }
    }
 }
}
