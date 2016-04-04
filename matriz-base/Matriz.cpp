#include "matriz.h"
#include <conio.h>
#include <string>
#include <iostream>

using namespace std;

Matriz :: Matriz(int num) :
linha(0), coluna(0), count(0), palavra_formada(new char[10]), aux(0)
{
	if(num==1)
	{
		matriz_jogo[0][0]='M'; matriz_jogo[0][1]='E'; matriz_jogo[0][2]='L'; matriz_jogo[0][3]='A'; matriz_jogo[0][4]='N'; matriz_jogo[0][5]='C'; matriz_jogo[0][6]='I'; matriz_jogo[0][7]='A'; matriz_jogo[0][8]='Z'; matriz_jogo[0][9]='B';
		matriz_jogo[1][0]='A'; matriz_jogo[1][1]='R'; matriz_jogo[1][2]='U'; matriz_jogo[1][3]='V'; matriz_jogo[1][4]='A'; matriz_jogo[1][5]='L'; matriz_jogo[1][6]='J'; matriz_jogo[1][7]='I'; matriz_jogo[1][8]='C'; matriz_jogo[1][9]='V';
		matriz_jogo[2][0]='A'; matriz_jogo[2][1]='G'; matriz_jogo[2][2]='N'; matriz_jogo[2][3]='A'; matriz_jogo[2][4]='M'; matriz_jogo[2][5]='U'; matriz_jogo[2][6]='C'; matriz_jogo[2][7]='W'; matriz_jogo[2][8]='A'; matriz_jogo[2][9]='A';
		matriz_jogo[3][0]='R'; matriz_jogo[3][1]='E'; matriz_jogo[3][2]='M'; matriz_jogo[3][3]='N'; matriz_jogo[3][4]='C'; matriz_jogo[3][5]='T'; matriz_jogo[3][6]='J'; matriz_jogo[3][7]='M'; matriz_jogo[3][8]='Q'; matriz_jogo[3][9]='G';
		matriz_jogo[4][0]='E'; matriz_jogo[4][1]='R'; matriz_jogo[4][2]='L'; matriz_jogo[4][3]='A'; matriz_jogo[4][4]='N'; matriz_jogo[4][5]='C'; matriz_jogo[4][6]='B'; matriz_jogo[4][7]='A'; matriz_jogo[4][8]='U'; matriz_jogo[4][9]='T';
		matriz_jogo[5][0]='P'; matriz_jogo[5][1]='E'; matriz_jogo[5][2]='R'; matriz_jogo[5][3]='R'; matriz_jogo[5][4]='E'; matriz_jogo[5][5]='F'; matriz_jogo[5][6]='A'; matriz_jogo[5][7]='C'; matriz_jogo[5][8]='I'; matriz_jogo[5][9]='M';
		matriz_jogo[6][0]='E'; matriz_jogo[6][1]='A'; matriz_jogo[6][2]='V'; matriz_jogo[6][3]='R'; matriz_jogo[6][4]='O'; matriz_jogo[6][5]='T'; matriz_jogo[6][6]='N'; matriz_jogo[6][7]='A'; matriz_jogo[6][8]='O'; matriz_jogo[6][9]='A';
		matriz_jogo[7][0]='M'; matriz_jogo[7][1]='A'; matriz_jogo[7][2]='E'; matriz_jogo[7][3]='C'; matriz_jogo[7][4]='A'; matriz_jogo[7][5]='Q'; matriz_jogo[7][6]='A'; matriz_jogo[7][7]='I'; matriz_jogo[7][8]='F'; matriz_jogo[7][9]='F';
		matriz_jogo[8][0]='X'; matriz_jogo[8][1]='J'; matriz_jogo[8][2]='E'; matriz_jogo[8][3]='L'; matriz_jogo[8][4]='A'; matriz_jogo[8][5]='N'; matriz_jogo[8][6]='N'; matriz_jogo[8][7]='I'; matriz_jogo[8][8]='A'; matriz_jogo[8][9]='G';
		matriz_jogo[9][0]='A'; matriz_jogo[9][1]='K'; matriz_jogo[9][2]='S'; matriz_jogo[9][3]='M'; matriz_jogo[9][4]='O'; matriz_jogo[9][5]='R'; matriz_jogo[9][6]='A'; matriz_jogo[9][7]='N'; matriz_jogo[9][8]='G'; matriz_jogo[9][9]='O';
	}

	if (num == 2)
	{
		matriz_jogo[0][0] = 'O'; matriz_jogo[0][1] = 'C'; matriz_jogo[0][2] = 'I'; matriz_jogo[0][3] = 'X'; matriz_jogo[0][4] = 'E'; matriz_jogo[0][5] = 'M'; matriz_jogo[0][6] = 'R'; matriz_jogo[0][7] = 'E'; matriz_jogo[0][8] = 'N'; matriz_jogo[0][9] = 'L';
		matriz_jogo[1][0] = 'A'; matriz_jogo[1][1] = 'H'; matriz_jogo[1][2] = 'N'; matriz_jogo[1][3] = 'A'; matriz_jogo[1][4] = 'P'; matriz_jogo[1][5] = 'S'; matriz_jogo[1][6] = 'E'; matriz_jogo[1][7] = 'F'; matriz_jogo[1][8] = 'O'; matriz_jogo[1][9] = 'P';
		matriz_jogo[2][0] = 'Y'; matriz_jogo[2][1] = 'I'; matriz_jogo[2][2] = 'B'; matriz_jogo[2][3] = 'I'; matriz_jogo[2][4] = 'G'; matriz_jogo[2][5] = 'T'; matriz_jogo[2][6] = 'C'; matriz_jogo[2][7] = 'J'; matriz_jogo[2][8] = 'R'; matriz_jogo[2][9] = 'C';
		matriz_jogo[3][0] = 'R'; matriz_jogo[3][1] = 'N'; matriz_jogo[3][2] = 'A'; matriz_jogo[3][3] = 'A'; matriz_jogo[3][4] = 'D'; matriz_jogo[3][5] = 'A'; matriz_jogo[3][6] = 'N'; matriz_jogo[3][7] = 'A'; matriz_jogo[3][8] = 'C'; matriz_jogo[3][9] = 'B';
		matriz_jogo[4][0] = 'S'; matriz_jogo[4][1] = 'A'; matriz_jogo[4][2] = 'C'; matriz_jogo[4][3] = 'M'; matriz_jogo[4][4] = 'C'; matriz_jogo[4][5] = 'L'; matriz_jogo[4][6] = 'E'; matriz_jogo[4][7] = 'N'; matriz_jogo[4][8] = 'R'; matriz_jogo[4][9] = 'F';
		matriz_jogo[5][0] = 'R'; matriz_jogo[5][1] = 'U'; matriz_jogo[5][2] = 'S'; matriz_jogo[5][3] = 'S'; matriz_jogo[5][4] = 'I'; matriz_jogo[5][5] = 'A'; matriz_jogo[5][6] = 'V'; matriz_jogo[5][7] = 'A'; matriz_jogo[5][8] = 'Y'; matriz_jogo[5][9] = 'P';
		matriz_jogo[6][0] = 'A'; matriz_jogo[6][1] = 'C'; matriz_jogo[6][2] = 'N'; matriz_jogo[6][3] = 'A'; matriz_jogo[6][4] = 'R'; matriz_jogo[6][5] = 'F'; matriz_jogo[6][6] = 'S'; matriz_jogo[6][7] = 'G'; matriz_jogo[6][8] = 'C'; matriz_jogo[6][9] = 'O';
		matriz_jogo[7][0] = 'E'; matriz_jogo[7][1] = 'L'; matriz_jogo[7][2] = 'I'; matriz_jogo[7][3] = 'H'; matriz_jogo[7][4] = 'C'; matriz_jogo[7][5] = 'I'; matriz_jogo[7][6] = 'V'; matriz_jogo[7][7] = 'A'; matriz_jogo[7][8] = 'B'; matriz_jogo[7][9] = 'T';
		matriz_jogo[8][0] = 'A'; matriz_jogo[8][1] = 'R'; matriz_jogo[8][2] = 'C'; matriz_jogo[8][3] = 'O'; matriz_jogo[8][4] = 'L'; matriz_jogo[8][5] = 'O'; matriz_jogo[8][6] = 'M'; matriz_jogo[8][7] = 'B'; matriz_jogo[8][8] = 'I'; matriz_jogo[8][9] = 'A';
		matriz_jogo[9][0] = 'G'; matriz_jogo[9][1] = 'A'; matriz_jogo[9][2] = 'P'; matriz_jogo[9][3] = 'E'; matriz_jogo[9][4] = 'R'; matriz_jogo[9][5] = 'U'; matriz_jogo[9][6] = 'L'; matriz_jogo[9][7] = 'P'; matriz_jogo[9][8] = 'V'; matriz_jogo[9][9] = 'R';
	}

	if(num==3)
	{
		matriz_jogo[0][0]='O'; matriz_jogo[0][1]='N'; matriz_jogo[0][2]='T'; matriz_jogo[0][3]='P'; matriz_jogo[0][4]='C'; matriz_jogo[0][5]='O'; matriz_jogo[0][6]='I'; matriz_jogo[0][7]='O'; matriz_jogo[0][8]='T'; matriz_jogo[0][9]='E';
		matriz_jogo[1][0]='V'; matriz_jogo[1][1]='M'; matriz_jogo[1][2]='T'; matriz_jogo[1][3]='I'; matriz_jogo[1][4]='A'; matriz_jogo[1][5]='O'; matriz_jogo[1][6]='A'; matriz_jogo[1][7]='A'; matriz_jogo[1][8]='U'; matriz_jogo[1][9]='A';
		matriz_jogo[2][0]='E'; matriz_jogo[2][1]='V'; matriz_jogo[2][2]='O'; matriz_jogo[2][3]='I'; matriz_jogo[2][4]='G'; matriz_jogo[2][5]='T'; matriz_jogo[2][6]='C'; matriz_jogo[2][7]='I'; matriz_jogo[2][8]='R'; matriz_jogo[2][9]='C';
		matriz_jogo[3][0]='R'; matriz_jogo[3][1]='G'; matriz_jogo[3][2]='A'; matriz_jogo[3][3]='N'; matriz_jogo[3][4]='U'; matriz_jogo[3][5]='R'; matriz_jogo[3][6]='O'; matriz_jogo[3][7]='R'; matriz_jogo[3][8]='S'; matriz_jogo[3][9]='O';
		matriz_jogo[4][0]='S'; matriz_jogo[4][1]='A'; matriz_jogo[4][2]='C'; matriz_jogo[4][3]='M'; matriz_jogo[4][4]='C'; matriz_jogo[4][5]='L'; matriz_jogo[4][6]='E'; matriz_jogo[4][7]='A'; matriz_jogo[4][8]='O'; matriz_jogo[4][9]='F';
		matriz_jogo[5][0]='Q'; matriz_jogo[5][1]='T'; matriz_jogo[5][2]='T'; matriz_jogo[5][3]='O'; matriz_jogo[5][4]='L'; matriz_jogo[5][5]='A'; matriz_jogo[5][6]='V'; matriz_jogo[5][7]='A'; matriz_jogo[5][8]='C'; matriz_jogo[5][9]='P';
		matriz_jogo[6][0]='M'; matriz_jogo[6][1]='O'; matriz_jogo[6][2]='A'; matriz_jogo[6][3]='O'; matriz_jogo[6][4]='L'; matriz_jogo[6][5]='E'; matriz_jogo[6][6]='M'; matriz_jogo[6][7]='A'; matriz_jogo[6][8]='C'; matriz_jogo[6][9]='O';
		matriz_jogo[7][0]='I'; matriz_jogo[7][1]='V'; matriz_jogo[7][2]='F'; matriz_jogo[7][3]='C'; matriz_jogo[7][4]='A'; matriz_jogo[7][5]='R'; matriz_jogo[7][6]='P'; matriz_jogo[7][7]='A'; matriz_jogo[7][8]='B'; matriz_jogo[7][9]='T';
		matriz_jogo[8][0]='A'; matriz_jogo[8][1]='C'; matriz_jogo[8][2]='A'; matriz_jogo[8][3]='V'; matriz_jogo[8][4]='W'; matriz_jogo[8][5]='J'; matriz_jogo[8][6]='Q'; matriz_jogo[8][7]='O'; matriz_jogo[8][8]='B'; matriz_jogo[8][9]='A';
		matriz_jogo[9][0]='G'; matriz_jogo[9][1]='A'; matriz_jogo[9][2]='N'; matriz_jogo[9][3]='S'; matriz_jogo[9][4]='O'; matriz_jogo[9][5]='U'; matriz_jogo[9][6]='L'; matriz_jogo[9][7]='P'; matriz_jogo[9][8]='V'; matriz_jogo[9][9]='R';
	}

	for(int i=0;i<10;i++)
		for(int j=0;j<10;j++)
			letras_selecionadas[i][j]=' ';

	letras_selecionadas[0][0]='-';

	for(int i=0;i<10;i++)
	{
		aux_l[i]=0;
		aux_c[i]=0;
	}

	for(int i=0;i<10;i++)
		palavra_formada[i] = 'a';
	
	for(int i=0;i<10;i++)
		for(int j=0;j<10;j++)
			mat[i][j]=0;


}

//Método que desenha o tabuleiro do jogo
void Matriz :: desenha_tabuleiro()
{
	int i,j;
	
	cout << endl;
	cout << "                          ~~~~ CACA-PALAVRAS ~~~~";
	cout << endl << endl << endl;
	cout<<" COMANDOS: Use as setas do teclado ";printf("(%c %c %c %c)",30,17,16,31);cout<<" para mover-se pelas letras.\n           Use a tecla ESPACO para selecionar as letras, uma por uma.\n           Use a tecla \"s\" para salvar a palavra selecionada.";
	cout << endl << endl << endl;

	cout << "                        1  2  3  4  5  6  7  8  9 10" << endl;
	for(i=0;i<10;i++)
	{
		if(i==9)
			cout << endl << "                   " << i+1 << " ";
		else
			cout << endl << "                    " << i+1 << " ";
		for(j=0;j<10;j++)
			cout << "  " << matriz_jogo[i][j];
		cout << endl<< "                      ";
		for(int k=0;k<10;k++)
			cout << "  " << letras_selecionadas[i][k];
	}

	cout << endl << endl << endl;
	cout << " Elas podem ser achadas de todas as maneiras, na diagonal, vertical, horizontal  podendo ser também nessas tres posiçoes";
	cout << " sendo da direita para a esquerda ou de  baixo para cima.";
}

//Método que conta quantas letras cada palavra escolhida tem
void Matriz :: set_contador(int cont)
{
	count = count + cont;
}

//Método que retorna o numero de letras da palavra
int Matriz :: get_contador()
{
	return count;
}

//Método que salva em dois vetores auxiliarse cada linha e coluna da matriz, cada vez que a pessoa clica espaço
void Matriz :: set_aux(int linha, int coluna)
{
	if(letras_selecionadas[linha][coluna]=='-')
	{
		aux_l[aux]=linha;
		aux_c[aux]=coluna;
		aux++;
	}
}

//Método que salva em um vetor todos os caracteres da matriz_jogo, formando então a palavra escolhida pela pessoa
void Matriz :: set_palavra()
{	
	for(int i=0;i<get_contador();i++)
		palavra_formada[i] = matriz_jogo[aux_l[i]][aux_c[i]];

}

//Método que torna maiúsculos os caracteres da matriz caso a palavra esteja incorreta
void Matriz::tornar_maiuscula()
{
	for (int i = 0; i < get_contador();i++)
	{
		if(mat[aux_l[i]][aux_c[i]] != 1)
		{
			matriz_jogo[aux_l[i]][aux_c[i]] = palavra_formada[i] - 32;
		}
	}
}

//Método que caso a palavra esteja correta, na matriz auxlar,mat, ela torna os mesmo lugares daquela matriz
//de 0(como inicializada) em 1, para que na hora de verificar se a palavra escolhida estiver errada,
//ela torne maiuscula(através do método tornar_maiuscula) somente os caracteres errados, e que nao
//pertençam a uma palavra correta já encontrada
void Matriz :: salvar_matriz()
{
	for(int i=0;i<get_contador();i++)
			mat[aux_l[i]][aux_c[i]] = 1;
}