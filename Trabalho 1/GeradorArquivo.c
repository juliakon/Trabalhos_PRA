#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MSG_ERRO_ABERTURA "Quantidade inv�lida de par�metros. Abortando execu��o do programa."

main (int argc, char * argv[])

{
    FILE *fp;

    setlocale(LC_ALL, "");  //Com essa fun��o a acentua��o e caracteres especiais aparecem em tela conforme a localidade do sistema.

    if(argc < 2)    //Verifica se foi passado o n�mero m�nimo de argumentos.
    {
        printf(MSG_ERRO_ABERTURA);  //"Quantidade inv�lida de par�metros. Abortando execu��o do programa."
        exit(0);
    }

    if (( fp  = fopen(argv[1],  argv[2])) == NULL) //A primeira posi��o do vetor sinaliza o nome do arquivo, enquanto que a segunda informa qual o modo de abertura do mesmo.
    {
        printf ("Erro  na  abertura  do  arquivo.");
        exit (0);
    }

    fclose(fp);

}
