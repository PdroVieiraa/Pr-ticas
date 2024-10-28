/*  Desafio de criar um programa que lê a quantidade de dedos que o user quer contar e o programa apresenta quantos dedos serão levantados em cada mão. */    


#include <stdio.h>
#include <stdlib.h>

void ImprimeDedos(int n) {
    for (int i = 1; i <= n; i++) {
        printf("|");

        if (i % 5 == 0) {
            printf(" ");
        }
    }
}

int main() {

    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if(num > 10){
        printf("O valor nao pode ser acima de 10 dedos!");
    }else{
    ImprimeDedos(num);}
}
