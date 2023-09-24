#include <stdio.h>

int main() {
    /* Criar um algoritmo que apresente um cadastro de informações */

    char nome[50], endereco[100], curso[50], disciplinas[200];
    int idade, matricula;
    float periodo;

    printf("Bem-vindo ao cadastro do estudante!\n");

    printf("\nDigite seu nome: ");
    scanf("%s", nome);

    printf("\nDigite sua idade: ");
    scanf("%d", &idade);

    printf("\nDigite o numero da matricula: ");
    scanf("%d", &matricula);

    printf("\nDigite seu endereço: ");
    scanf("%s", endereco);

    printf("\nDigite seu curso e o periodo: ");
    scanf("%s %f", curso, &periodo);

    printf("\nDigite as disciplinas (separadas por virgula): ");
    scanf("%s", disciplinas);

    // Apresentando as informações do cadastro

    printf("\nInformações do Cadastro:\n");
    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Matricula: %d\n", matricula);
    printf("Endereço: %s\n", endereco);
    printf("Curso: %s\n", curso);
    printf("Periodo: %.2f\n", periodo);
    printf("Disciplinas: %s\n", disciplinas);

    return 0;
}










