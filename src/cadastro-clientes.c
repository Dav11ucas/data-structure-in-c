#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int cpf;
    int idade;
    int renda;
    char nome[30];

}clientes;

int main (void){
    clientes clientList[5];
    int contador = 0;

    for(int i = 0; i < 5; i++){
        printf("\ndigite o CPF do %d cliente\n",i+1);
        scanf("%d",&clientList[i].cpf);
        printf("\ndigite a IDADE do %d cliente\n",i+1);
        scanf("%d",&clientList[i].idade);
        printf("\ndigite a RENDA do %d cliente\n",i+1);
        scanf("%d",&clientList[i].renda);
        getchar();
        printf("\ndigite o NOME do %d cliente (suportado até 30 caracteres)\n",i+1);
        gets(clientList[i].nome);
    }   
    for (int i = 0; i < 5; i++){
        if ( clientList[i].idade >= 18){
            contador++;
        }
    }
    printf("\na quantidade de clientes maiores de idade (+18) é: %d",contador);

    return 0;
}