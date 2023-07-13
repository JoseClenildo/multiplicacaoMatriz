#include <pthread.h>
#include <stdio.h>
#include <unistd.h>

/**
int main(){
Scanf(%d, &N);
N => numero de multiplicações;
for(i = 0; i < N; i++){
    Scanf(%d %d, &l &c);
    float matriz1[l][c];
    for(int j = 0; j < l; j++){
       for(int k = 0; k < c; k++){
            Scanf(%f, &valor);
            matriz1[j][k] = valor;
       }
    }
    Scanf(%d %d, &line &colum);
    float matriz2[line][colum];
    for(int j = 0; j < line; j++){
       for(int k = 0; k < colum; k++){
            Scanf(%f, &valor);
            matriz2[j][k] = valor;
       }
    }
    pthread_t *thread_handles = malloc(l*sizeof(pthread_t));
  for(int contador = 0; contador < l; contador++){
    pthread_create(&thread_handles[contador], NULL, multiplicacao, (void*) thread)
}
return 0;
}


void *multiplicacao (void * args) {
  for(int i = 0; i < colum; i++){
     matriz1[i][thread]*matriz2[][]
