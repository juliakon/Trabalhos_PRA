/*UDESC - Matéria: Projeto de Arquivos - Professor: Rogério Silva
Alunos: Arthur Nicodemus Borges, Éwerton Cercal, Julia Kondlatsch
Tema 1 - Escola: cadastro de alunos contendo: nome do aluno, data de
nascimento (dd/mm/aaaa), número de matricula, lista de disciplinas
matriculadas (quantidade indeterminada)*/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <locale.h>
#include <unistd.h>

int CriaArquivo(char *nome, char *modo)
{

    FILE *fp;

    if ((fp  = fopen(nome,  modo)) == NULL)   //A primeira posição do vetor sinaliza o nome do arquivo, enquanto que a segunda informa qual o modo de abertura do mesmo.
    {
        printf ("Erro  na  abertura  do  arquivo.");
        exit (0);
    }

    fclose(fp);

    return 0;

}

int GravaRegistros()
{

    return 0;

}

int PesquisaRegistros()
{

    return 0;

}

int main (void)

{

    FILE *file;
    char nome_arq[] = "golias.bin";
    int escolha = 0;

    setlocale(LC_ALL, "");  //Com essa função a acentuação e caracteres especiais aparecem em tela conforme a localidade do sistema.

    if ((file  = fopen(nome_arq, "r+b")) != NULL)   //Verifica se o arquivo existe.
    {
        fclose(file);
    }
    else
    {
       CriaArquivo(nome_arq, "w+b");    //Aplicar tratamento para verificar se o arquivo já existe.
    }

    do {

        do {

            system("clear || cls"); //"Limpa" os dados em tela.

            printf("Selecione a operação que deseja realizar:\n");
            printf("1 - Realizar gravações de cadastros de alunos.;\n");
            printf("2 - Realizar pesquisa de cadastros de alunos.\n");
            printf("3 - Finalizar programa.\n");
            printf("Sua escolha: ");
            scanf("%d", &escolha);
            getchar();

        } while (escolha > 3 || escolha < 1);

        system("clear || cls");

        switch (escolha) {
            case 3: break;  //Finalizar
            case 1: GravaRegistros();
                break;
            case 2: PesquisaRegistros();
                break;
        }

    } while (escolha != 3);

    return 0;

}
