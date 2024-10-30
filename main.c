#include <stdio.h>
#include <stdlib.h>

/*
Escreva um programa que preencha um vetor de 20 ve�culos usando a struct para armazenar
as identifica��es e quilometragem dos ve�culos de uma empresa de transporte. Depois, o
programa deve solicitar ao usu�rio um n�mero de identifica��o para pesquisar no vetor e mostrar
todas as posi��es onde essa identifica��o aparece.
*/

struct Veiculo{
       int id;
       float quilometragem;
};

typedef struct Veiculo veiculo;

int main()
{
    veiculo vetor[20];
    int posicao = -1;

    for (int i = 0; i < 20; i++){
        printf("Digite o id do veiculo %d: ", i);
        scanf("%d", &vetor[i].id);
        printf("Digite a quilometragem do veiculo %d: ", i);
        scanf("%d", &vetor[i].quilometragem);
    }

    int identificacao;

    do{
    printf("Digite um numero de identificacao do veiculo\n");
    scanf("%d", &identificacao);

    for (int i = 0; i < 5; i++){
        if (identificacao == vetor[i].id){
            posicao = i;
        }
    }
        if (posicao != -1){
            printf("A posicao desse identificador eh: %d\n", posicao);
        }
        else
            printf("Posicao nao encontrada\n");

    }while(posicao == -1);
}
