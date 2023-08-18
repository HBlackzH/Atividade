#include<stdio.h>

int main (){

  char nome[50];
  int idade;
  char matricula[20];
  char endereco[100];
  char curso[50];
  int periodo;
  char disciplina[50];
  float mensalidade;

  printf("          Cadastro          ");

  printf("\n Seu Nome: ");
  fgets(nome, 50, stdin);
  fflush(stdin);

  printf("\n Qual sua idade: ");
  scanf("%d", &idade);
  fflush(stdin);

  printf("\n Sua Matricula: ");
  fgets(matricula, 20, stdin);
  fflush(stdin);

  printf("\n Seu Endereco: ");
  fgets(endereco, 100, stdin);
  fflush(stdin);

  printf("\n Seu curso: ");
  fgets(curso, 50, stdin);
  fflush(stdin);

  printf("\n Qual Periodo: ");
  scanf("%i", &periodo);
  fflush(stdin);

  printf("\n Qual Disciplina: ");
  fgets(disciplina, 50, stdin);
  fflush(stdin);

  printf("\n Quanto e sua Mensalidade: ");
  scanf("%f", &mensalidade);
  fflush(stdin);

printf("\n     CONFIRA SEU CADASTRO:     ");
printf("\n Seu nome: %s", nome);
printf("\n Sua idade: %d", idade);
printf("\n Sua matricula: %s", matricula);
printf("\n Seu endereco: %s", endereco);
printf("\n Seu Curso: %s", curso);
printf("\n Seu Periodo: %i", periodo);
printf("\n Sua Disciplina: %s", disciplina);
printf("\n Sua Mensalidade: %.2f", mensalidade);


}
