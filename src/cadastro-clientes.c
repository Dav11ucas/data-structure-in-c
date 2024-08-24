/*
Fazer um código que crie um formulário de cadastro para Clientes com. CPF, idade, Renda e Nome.
-O cadastro será feito para 5 clientes;
-Utilize Struct
-Faça a leitura dos dados;
-Ao final imprimir a quantidade de clientes com renda superior a 5000.00
*/

#include <stdio.h>
#include <stdio.h>
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
        printf("\e[1;1H\e[2J"); // "limpa o prompt"
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
        if ( clientList[i].renda > 5000.00){
            contador++;
        }
    }
    printf("\na quantidade de clientes com renda superior a 5000 é: %d",contador);

    return 0;
}