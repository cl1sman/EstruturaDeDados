#include <iostream>
#include "funcao.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//#include <ncurses.h>

//Prototipando as funções
void menu(void);
void cadastrar(void);
void imprimir(void);

int p = 2;

int main() {
    menu();
    return 0;
}

void menu()//MENU
{
    std::system("clear");
    int n;
    printf("\n============================= MENU =============================\n");
    printf("====       1. Cadastro de Estudantes                        ====\n");
    printf("====       2. Busca de Estudantes por matricula             ====\n");
    printf("====       3. Listagem de Estudantes por media              ====\n");
    printf("====       4. Listagem de Estudantes por matricula          ====\n");
    printf("====       5. Imprimir                                      ====\n");
    printf("================================================================\n");
    printf("\nDigite a opção:");
    scanf("%d",&n);

    switch (n)
    {
        case 1:
            cadastrar(); //Função feita no corpo deste codigo
            break;

        case 2:
            sequencial_mat (alunos);
            break;

        case 3:
            listagem_media(alunos, p);
            break;


        case 4:
            listagem_matricula(alunos, p);
            break;

        case 5:
            imprimir();
            break;

        default:
            printf("Numero Incorreto !!!!\n");
            system("pause");
            menu();
    }
}

//Função cadastrar
void cadastrar(){
    for (int i = 0; i < 2; ++i) { //mudar pra 5 CARAMBA
        printf("\n");
        printf("Numero da matricula: \n");
        scanf("%d", &alunos[i].matricula);

        printf("Curso: \n");
        scanf("%s", &alunos[i].curso);

        printf("Nome: \n");
        scanf("%s", &alunos[i].nome);

        printf("Nota 1: \n");
        scanf("%f", &alunos[i].nota1);

        printf("Nota 2: \n");
        scanf("%f", &alunos[i].nota2);

        printf("Media: %.2f\n", alunos[i].media = (alunos[i].nota1 + alunos[i].nota2) / 2);
    }
    imprimir();
}

void imprimir(){
    system("clear");
    for (int i = 0; i < 2; ++i) { //MUDAR ESSA MERDA PRA DOIIIIIIIIIIIS
        printf("\nMatricula é: %d", alunos[i].matricula);
        printf("\nCurso: %s", alunos[i].curso);
        printf("\nNome: %s",alunos[i].nome);
        printf("\nNota 1: %.2f", alunos[i].nota1);
        printf("\nNota 2: %.2f", alunos[i].nota2);
        printf("\nMedia: %.2f", alunos[i].media);
        printf("\n\n");
    }
    //Teste para pause no linux
    std::cout <<"Press enter to continue ...";
    std::cin.get();
    //system("pause");
    menu();
}