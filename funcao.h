//
// Created by clisman on 12/04/19.
//

#ifndef ESTRUTURA_DOIS_TEST_FUNCAO_H
#define ESTRUTURA_DOIS_TEST_FUNCAO_H

#endif //ESTRUTURA_DOIS_TEST_FUNCAO_H

void menu(void);
void imprimir(void);
void listagem_media(void);
void listagem_matricula(void);


//Estrutura
struct cadastro {
    int matricula;
    char curso[20];
    char nome[30];
    float nota1;
    float nota2;
    float media;
};

void listagem_media(cadastro *v, int n) {
    int i, j;
    cadastro aux;
    for(i=0; i<(n-1); i++)
    {
        for (j=(i+1); j<(n);j++)
        {
            if(v[i].media < v[j].media) //qualquer coisa voltar para >
            {
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }
        }
    }
    imprimir();
}

struct cadastro alunos[2]; //VOLTAR PRA 5 ESSE CÃO


void sequencial_mat (cadastro v[] )
{
    int i,pesq;
    bool acha;
    system("clear");
    printf("Escreva o matricula que vc quer buscar: ");
    scanf("%d", &pesq);
    i=0;

    acha=false;
    while(i<10 && acha == false)
    {
        if(pesq == v[i].matricula)
            acha=true;
        else
            i++;
    }

    if(acha==true)
    {
        printf("\n=========================================================");
        printf("\nMatricula é: %d", alunos[i].matricula);
        printf("\nCurso: %s", alunos[i].curso);
        printf("\nNome: %s",alunos[i].nome);
        printf("\nNota 1: %.2f", alunos[i].nota1);
        printf("\nNota 2: %.2f", alunos[i].nota2);
        printf("\nMedia: %.2f", alunos[i].media);
        printf("\n==========================================================\n");

        system("pause");
        menu();
    }

    else

        system("clear");
        printf("O numero não foi achado !!!!\n");
        system("pause");
        menu();

}


void listagem_media(cadastro v[],int n);


void listagem_matricula(cadastro v[],int n)
{
    int i, j;
    cadastro aux; //Porque
    for(i=0; i<(n-1); i++)
    {
        for (j=(i+1); j<(n);j++)
        {
            if(v[i].matricula > v[j].matricula) //qualquer coisa voltar para <
            {
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }
        }
    }
    imprimir();
}