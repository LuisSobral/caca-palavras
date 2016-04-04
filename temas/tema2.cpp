#include "tema2.h"
#include "matriz.h"
#include <string>
#include <iostream>
#include <conio.h>

using namespace std;

tema2::tema2(int num) :
Matriz(num)
{
	palavra1[0] = 'p'; palavra1[1] = 'e'; palavra1[2] = 'r'; palavra1[3] = 'u';
	palavra2[0] = 'c'; palavra2[1] = 'h'; palavra2[2] = 'i'; palavra2[3] = 'l'; palavra2[4] = 'e';
	palavra3[0] = 'c'; palavra3[1] = 'h'; palavra3[2] = 'i'; palavra3[3] = 'n'; palavra3[4] = 'a';
	palavra4[0] = 'b'; palavra4[1] = 'r'; palavra4[2] = 'a'; palavra4[3] = 's'; palavra4[4] = 'i'; palavra4[5] = 'l';
	palavra5[0] = 'c'; palavra5[1] = 'a'; palavra5[2] = 'n'; palavra5[3] = 'a'; palavra5[4] = 'd'; palavra5[5] = 'a'; 
	palavra6[0] = 'f'; palavra6[1] = 'r'; palavra6[2] = 'a'; palavra6[3] = 'n'; palavra6[4] = 'c'; palavra6[5] = 'a';
	palavra7[0] = 'm'; palavra7[1] = 'e'; palavra7[2] = 'x'; palavra7[3] = 'i'; palavra7[4] = 'c'; palavra7[5] = 'o';
	palavra8[0] = 'r'; palavra8[1] = 'u'; palavra8[2] = 's'; palavra8[3] = 's'; palavra8[4] = 'i'; palavra8[5] = 'a';
	palavra9[0] = 'e'; palavra9[1] = 's'; palavra9[2] = 'p'; palavra9[3] = 'a'; palavra9[4] = 'n'; palavra9[5] = 'h'; palavra9[6] = 'a';
	palavra10[0] = 'c'; palavra10[1] = 'o'; palavra10[2] = 'l'; palavra10[3] = 'o'; palavra10[4] = 'm'; palavra10[5] = 'b'; palavra10[6] = 'i'; palavra10[7] = 'a';
}



//Método que captura do teclado o movimento que a pessoa realiza
int tema2::comando()
{
	int tecla;
	tecla = getch();

	if (tecla == ESPACO)
	{
		if ((matriz_jogo[linha][coluna] >= 'A') && (matriz_jogo[linha][coluna] <= 'Z'))
			matriz_jogo[linha][coluna] = matriz_jogo[linha][coluna] + 32;

		set_contador(1);
		set_aux(linha, coluna);
		system("cls");
		desenha_tabuleiro();
		cout << endl << endl << endl;
		cout << " As palavras sao: \n peru|chile|china|brasil|canada|franca|mexico|russia|espanha|colombia" << endl << endl;
	}

	if (tecla == DIREITA)
	{
		letras_selecionadas[linha][coluna] = ' ';

		if (coluna == 9)
		{
			coluna = 0;
			letras_selecionadas[linha][coluna] = '-';
		}

		else
		{
			coluna++;
			letras_selecionadas[linha][coluna] = '-';
		}

		system("cls");
		desenha_tabuleiro();
		cout << endl << endl << endl;
		cout << " As palavras sao: \n peru|chile|china|brasil|canada|franca|mexico|russia|espanha|colombia" << endl << endl;
	}

	if (tecla == ESQUERDA)
	{
		letras_selecionadas[linha][coluna] = ' ';

		if (coluna == 0)
		{
			coluna = 9;
			letras_selecionadas[linha][coluna] = '-';
		}

		else
		{
			coluna--;
			letras_selecionadas[linha][coluna] = '-';
		}

		system("cls");
		desenha_tabuleiro();
		cout << endl << endl << endl;
		cout << " As palavras sao: \n peru|chile|china|brasil|canada|franca|mexico|russia|espanha|colombia" << endl << endl;
	}

	if (tecla == CIMA)
	{
		letras_selecionadas[linha][coluna] = ' ';

		if (linha == 0)
		{
			linha = 9;
			letras_selecionadas[linha][coluna] = '-';
		}

		else
		{
			linha--;
			letras_selecionadas[linha][coluna] = '-';
		}

		system("cls");
		desenha_tabuleiro();
		cout << endl << endl << endl;
		cout << " As palavras sao: \n peru|chile|china|brasil|canada|franca|mexico|russia|espanha|colombia" << endl << endl;
	}

	if (tecla == BAIXO)
	{
		letras_selecionadas[linha][coluna] = ' ';

		if (linha == 9)
		{
			linha = 0;
			letras_selecionadas[linha][coluna] = '-';
		}

		else
		{
			linha++;
			letras_selecionadas[linha][coluna] = '-';
		}

		system("cls");
		desenha_tabuleiro();
		cout << endl << endl << endl;
		cout << " As palavras sao: \n peru|chile|china|brasil|canada|franca|mexico|russia|espanha|colombia" << endl << endl;
	}

	if (tecla == SALVAR)
	{
		int ret;
		ret = verificar_palavra();
		return ret;
	}

}

//Método que verifica se a palavra escolhida pela pessoa está correta
int tema2::verificar_palavra()
{
	set_palavra();

	int resp = 0;

	if ((get_contador() == 4) || (get_contador() == 5) || (get_contador() == 6) || (get_contador() == 7) || (get_contador() == 8))
	{
		if (get_contador() == 4)
		{
			if ((palavra_formada[0] == palavra1[0]) && (palavra_formada[1] == palavra1[1]) && (palavra_formada[2] == palavra1[2]) && (palavra_formada[3] == palavra1[3]))
				resp = 1;

			else
				resp = 0;
		}

		if (get_contador() == 5)
		{
			if ((palavra_formada[0] == palavra2[0]) && (palavra_formada[1] == palavra2[1]) && (palavra_formada[2] == palavra2[2]) && (palavra_formada[3] == palavra2[3]) && (palavra_formada[4] == palavra2[4]))
				resp = 1;

			else
			{
				resp = 0;

				if ((palavra_formada[0] == palavra3[0]) && (palavra_formada[1] == palavra3[1]) && (palavra_formada[2] == palavra3[2]) && (palavra_formada[3] == palavra3[3]) && (palavra_formada[4] == palavra3[4]))
					resp = 1;

				else
					resp = 0;
			}
		}

		if (get_contador() == 6)
		{
			if ((palavra_formada[0] == palavra4[0]) && (palavra_formada[1] == palavra4[1]) && (palavra_formada[2] == palavra4[2]) && (palavra_formada[3] == palavra4[3]) && (palavra_formada[4] == palavra4[4]) && (palavra_formada[5] == palavra4[5]))
				resp = 1;

			else
			{
				resp = 0;

				if ((palavra_formada[0] == palavra5[0]) && (palavra_formada[1] == palavra5[1]) && (palavra_formada[2] == palavra5[2]) && (palavra_formada[3] == palavra5[3]) && (palavra_formada[4] == palavra5[4]) && (palavra_formada[5] == palavra5[5]))
					resp = 1;

				else
				{
					if ((palavra_formada[0] == palavra6[0]) && (palavra_formada[1] == palavra6[1]) && (palavra_formada[2] == palavra6[2]) && (palavra_formada[3] == palavra6[3]) && (palavra_formada[4] == palavra6[4]) && (palavra_formada[5] == palavra6[5]))
						resp = 1;

					else
					{
						resp = 0;

						if ((palavra_formada[0] == palavra7[0]) && (palavra_formada[1] == palavra7[1]) && (palavra_formada[2] == palavra7[2]) && (palavra_formada[3] == palavra7[3]) && (palavra_formada[4] == palavra7[4]) && (palavra_formada[5] == palavra7[5]))
							resp = 1;

						else
						{
							resp = 0;

							if ((palavra_formada[0] == palavra8[0]) && (palavra_formada[1] == palavra8[1]) && (palavra_formada[2] == palavra8[2]) && (palavra_formada[3] == palavra8[3]) && (palavra_formada[4] == palavra8[4]) && (palavra_formada[5] == palavra8[5]))
								resp = 1;

							else
								resp = 0;
						}
					}
				}
			}
		}

		if (get_contador() == 7)
		{
			if ((palavra_formada[0] == palavra9[0]) && (palavra_formada[1] == palavra9[1]) && (palavra_formada[2] == palavra9[2]) && (palavra_formada[3] == palavra9[3]) && (palavra_formada[4] == palavra9[4]) && (palavra_formada[5] == palavra9[5]) && (palavra_formada[6] == palavra9[6]))
				resp = 1;
			else
				resp = 0;
		}

		if (get_contador() == 8)
		{
				if ((palavra_formada[0] == palavra10[0]) && (palavra_formada[1] == palavra10[1]) && (palavra_formada[2] == palavra10[2]) && (palavra_formada[3] == palavra10[3]) && (palavra_formada[4] == palavra10[4]) && (palavra_formada[5] == palavra10[5]) && (palavra_formada[6] == palavra10[6]) && (palavra_formada[7] == palavra10[7]))
					resp = 1;

				else
					resp = 0;
		}
	}

	else
		resp = 0;

	if (resp == 0)
		tornar_maiuscula();
	else
		salvar_matriz();

	//A partir daqui os atributos são "resetados" para que outra palavra possa escolhida
	count = 0;
	for (int i = 0; i<10; i++)
	{
		aux_l[i] = 0;
		aux_c[i] = 0;
	}
	aux = 0;

	return resp;
}

//Método que verifica se todas as palavras foram achadas e esse é o fim de jogo
int tema2::fim_jogo()
{
	if ((mat[9][2] == 1) && (mat[9][3] == 1) && (mat[9][4] == 1) && (mat[9][5] == 1)
	&&  (mat[7][4] == 1) && (mat[7][3] == 1) && (mat[7][2] == 1) && (mat[7][1] == 1)
	&&  (mat[0][1] == 1) && (mat[1][1] == 1) && (mat[2][1] == 1) && (mat[3][1] == 1)
    &&  (mat[3][9] == 1) && (mat[4][8] == 1) && (mat[5][7] == 1) && (mat[6][6] == 1) && (mat[7][5] == 1) && (mat[8][4] == 1)
	&&  (mat[3][8] == 1) && (mat[3][7] == 1) && (mat[3][6] == 1) && (mat[3][5] == 1) && (mat[3][4] == 1) && (mat[3][3] == 1)
	&&  (mat[6][5] == 1) && (mat[6][4] == 1) && (mat[6][3] == 1) && (mat[6][2] == 1) && (mat[6][1] == 1) && (mat[6][0] == 1)
	&&  (mat[0][5] == 1) && (mat[0][4] == 1) && (mat[0][3] == 1) && (mat[0][2] == 1) && (mat[0][1] == 1) && (mat[0][0] == 1)
    &&  (mat[5][0] == 1) && (mat[5][1] == 1) && (mat[5][2] == 1) && (mat[5][3] == 1) && (mat[5][4] == 1) && (mat[5][5] == 1)
	&&  (mat[1][6] == 1) && (mat[1][5] == 1) && (mat[1][4] == 1) && (mat[1][3] == 1) && (mat[1][2] == 1) && (mat[1][1] == 1) && (mat[1][0] == 1)
	&&  (mat[8][2] == 1) && (mat[8][3] == 1) && (mat[8][4] == 1) && (mat[8][5] == 1) && (mat[8][6] == 1) && (mat[8][7] == 1) && (mat[8][8] == 1) && (mat[8][9] == 1))
	{
		system("cls");
		cout << endl << endl << endl << " PARABENS VOCE ACHOU TODAS AS PALAVRAS!!" << endl << endl;
		return 1;
	}
}
