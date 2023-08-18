#include<stdio.h>

int main (){

  char nome[50];
  int idade;
  int matricula;
  char endereco[100];
  char curso[50];
  int periodo;
  char disciplina[50];
  float mensalidade;

  printf("Cadastro");

  printf("\n\nSeu nome: ");
  fgets(nome,50,stdin);
  printf("\nQual sua idade: ");
  scanf("%d", &idade);
  printf("\nSua Matricula: ");
  scanf("%d", &matricula);
  fflush(stdin);
  printf("\nSeu Endereco: ");
  fgets(endereco,100,stdin);
  printf("\nSeu curso: ");
  fgets(curso,50,stdin);
  printf("\nQual Periodo: ");
  scanf("%d", &periodo);
  fflush(stdin);
  printf("\nQual Disciplina: ");
  fgets(disciplina, 50, stdin);
  printf("\nQuanto e sua Mensalidade: ");
  scanf("%f", &mensalidade);

printf("\nCONFIRA SEU CADASTRO:");

printf("\nSeu nome: %s", &nome);
printf("\nSua idade: %d", idade);
printf("\nSua matricula: %d", matricula);
printf("\nSeu endereco: %s", &endereco);
printf("\nSeu Curso: %s", curso);
printf("\nSeu Periodo: %d", periodo);
printf("\nSua Disciplina: %s", disciplina);
printf("\nSua Mensalidade: %.2f", mensalidade);


}
