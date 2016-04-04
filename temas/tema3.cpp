#include "tema3.h"
#include "matriz.h"
#include <string>
#include <iostream>
#include <conio.h>

using namespace std;

tema3 :: tema3(int num) :
Matriz(num)
{
	palavra1[0] = 'g'; palavra1[1] = 'a'; palavra1[2] = 't'; palavra1[3] = 'o';
	palavra2[0] = 'l'; palavra2[1] = 'o'; palavra2[2] = 'b'; palavra2[3] = 'o';
	palavra3[0] = 'p'; palavra3[1] = 'a'; palavra3[2] = 't'; palavra3[3] = 'o';
	palavra4[0] = 'r'; palavra4[1] = 'a'; palavra4[2] = 't'; palavra4[3] = 'o';
	palavra5[0] = 'u'; palavra5[1] = 'r'; palavra5[2] = 's'; palavra5[3] = 'o';
	palavra6[0] = 'v'; palavra6[1] = 'a'; palavra6[2] = 'c'; palavra6[3] = 'a';
	palavra7[0] = 'g'; palavra7[1] = 'a'; palavra7[2] = 'n'; palavra7[3] = 's'; palavra7[4] = 'o';
	palavra8[0] = 't'; palavra8[1] = 'i'; palavra8[2] = 'g'; palavra8[3] = 'r'; palavra8[4] = 'e';
	palavra9[0] = 'c'; palavra9[1] = 'a'; palavra9[2] = 'm'; palavra9[3] = 'e'; palavra9[4] = 'l'; palavra9[5] = 'o';
	palavra10[0] = 'c'; palavra10[1] = 'o'; palavra10[2] = 'i'; palavra10[3] = 'o'; palavra10[4] = 't'; palavra10[5] = 'e';
}



//Método que captura do teclado o movimento que a pessoa realiza
int tema3 :: comando()
{
	int tecla;
	tecla=getch();

	if(tecla==ESPACO)
	{
		if((matriz_jogo[linha][coluna] >= 'A' ) && (matriz_jogo[linha][coluna] <= 'Z'))
			matriz_jogo[linha][coluna] = matriz_jogo[linha][coluna] + 32;
		
		set_contador(1);
		set_aux(linha,coluna);
		system("cls");
		desenha_tabuleiro();
		cout << endl << endl << endl;
		cout << " As palavras sao: \n gato|lobo|pato|rato|urso|vaca|ganso|tigre|camelo|coiote" << endl << endl;
	}

	if(tecla==DIREITA)
	{
		letras_selecionadas[linha][coluna]=' ';

		if(coluna==9)
		{
			coluna=0;
			letras_selecionadas[linha][coluna]='-';
		}

		else
		{
			coluna++;
			letras_selecionadas[linha][coluna]='-';
		}

		system("cls");
		desenha_tabuleiro();
		cout << endl << endl << endl;
		cout << " As palavras sao: \n gato|lobo|pato|rato|urso|vaca|ganso|tigre|camelo|coiote" << endl << endl;
	}
	
	if(tecla==ESQUERDA)
	{
		letras_selecionadas[linha][coluna]=' ';

		if(coluna==0)
		{
			coluna=9;
			letras_selecionadas[linha][coluna]='-';
		}

		else
		{
			coluna--;
			letras_selecionadas[linha][coluna]='-';
		}

		system("cls");
		desenha_tabuleiro();
		cout << endl << endl << endl;
		cout << " As palavras sao: \n gato|lobo|pato|rato|urso|vaca|ganso|tigre|camelo|coiote" << endl << endl;
	}

	if(tecla==CIMA)
	{
		letras_selecionadas[linha][coluna]=' ';

		if(linha==0)
		{
			linha=9;
			letras_selecionadas[linha][coluna]='-';
		}

		else
		{
			linha--;
			letras_selecionadas[linha][coluna]='-';
		}

		system("cls");
		desenha_tabuleiro();
		cout << endl << endl << endl;
		cout << " As palavras sao: \n gato|lobo|pato|rato|urso|vaca|ganso|tigre|camelo|coiote" << endl << endl;
	}

	if(tecla==BAIXO)
	{
		letras_selecionadas[linha][coluna]=' ';

		if(linha==9)
		{
			linha=0;
			letras_selecionadas[linha][coluna]='-';
		}

		else
		{
			linha++;
			letras_selecionadas[linha][coluna]='-';
		}

		system("cls");
		desenha_tabuleiro();
		cout << endl << endl << endl;
		cout << " As palavras sao: \n gato|lobo|pato|rato|urso|vaca|ganso|tigre|camelo|coiote" << endl << endl;
	}

	if(tecla==SALVAR)
	{
		int ret;
		ret = verificar_palavra();
		return ret;
	}

}

//Método que verifica se a palavra escolhida pela pessoa está correta
int tema3 :: verificar_palavra()
{
	set_palavra();

	int resp=0;

	if ((get_contador() == 4) || (get_contador() == 5) || (get_contador() == 6))
	{
		if (get_contador() == 4)
		{
			if ((palavra_formada[0] == palavra1[0]) && (palavra_formada[1] == palavra1[1]) && (palavra_formada[2] == palavra1[2]) && (palavra_formada[3] == palavra1[3]))
				resp = 1;

			else
			{
				resp = 0;

				if ((palavra_formada[0] == palavra2[0]) && (palavra_formada[1] == palavra2[1]) && (palavra_formada[2] == palavra2[2]) && (palavra_formada[3] == palavra2[3]))
					resp = 1;

				else
				{
					if ((palavra_formada[0] == palavra3[0]) && (palavra_formada[1] == palavra3[1]) && (palavra_formada[2] == palavra3[2]) && (palavra_formada[3] == palavra3[3]))
						resp = 1;
					
					else
					{
						if ((palavra_formada[0] == palavra4[0]) && (palavra_formada[1] == palavra4[1]) && (palavra_formada[2] == palavra4[2]) && (palavra_formada[3] == palavra4[3]))
							resp = 1;

						else
						{
							if ((palavra_formada[0] == palavra5[0]) && (palavra_formada[1] == palavra5[1]) && (palavra_formada[2] == palavra5[2]) && (palavra_formada[3] == palavra5[3]))
								resp = 1;

							else
							{
								if ((palavra_formada[0] == palavra6[0]) && (palavra_formada[1] == palavra6[1]) && (palavra_formada[2] == palavra6[2]) && (palavra_formada[3] == palavra6[3]))
									resp = 1;

								else
									resp = 0;
							}
						}
					}
				}
			}
		}

		if (get_contador() == 5)
		{
			if ((palavra_formada[0] == palavra7[0]) && (palavra_formada[1] == palavra7[1]) && (palavra_formada[2] == palavra7[2]) && (palavra_formada[3] == palavra7[3]) && (palavra_formada[4] == palavra7[4]))
				resp = 1;

			else
			{
				resp = 0;

				if ((palavra_formada[0] == palavra8[0]) && (palavra_formada[1] == palavra8[1]) && (palavra_formada[2] == palavra8[2]) && (palavra_formada[3] == palavra8[3]) && (palavra_formada[4] == palavra8[4]))
					resp = 1;

				else
					resp = 0;
			}
		}

		if (get_contador() == 6)
		{
			if ((palavra_formada[0] == palavra9[0]) && (palavra_formada[1] == palavra9[1]) && (palavra_formada[2] == palavra9[2]) && (palavra_formada[3] == palavra9[3]) && (palavra_formada[4] == palavra9[4]) && (palavra_formada[5] == palavra9[5]))
				resp = 1;

			else
			{
				if ((palavra_formada[0] == palavra10[0]) && (palavra_formada[1] == palavra10[1]) && (palavra_formada[2] == palavra10[2]) && (palavra_formada[3] == palavra10[3]) && (palavra_formada[4] == palavra10[4]) && (palavra_formada[5] == palavra10[5]))
					resp = 1;

				else
					resp = 0;
			}
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
	for(int i=0;i<10;i++)
	{
		aux_l[i]=0;
		aux_c[i]=0;
	}
	aux=0;

	return resp;
}

//Método que verifica se todas as palavras foram achadas e esse é o fim de jogo
int tema3 :: fim_jogo()
{		
	if ((mat[3][1] == 1) && (mat[4][1] == 1) && (mat[5][1] == 1) && (mat[6][1] == 1) 
		&& (mat[9][6] == 1) && (mat[8][7] == 1) && (mat[7][8] == 1) && (mat[6][9] == 1)
		&& (mat[0][3] == 1) && (mat[1][4] == 1) && (mat[2][5] == 1) && (mat[3][6] == 1)
		&& (mat[3][0] == 1) && (mat[4][1] == 1) && (mat[5][2] == 1) && (mat[6][3] == 1)
		&& (mat[1][8] == 1) && (mat[2][8] == 1) && (mat[3][8] == 1) && (mat[4][8] == 1)
		&& (mat[8][3] == 1) && (mat[8][2] == 1) && (mat[8][1] == 1) && (mat[8][0] == 1)
		&& (mat[9][0] == 1) && (mat[9][1] == 1) && (mat[9][2] == 1) && (mat[9][3] == 1) && (mat[9][4] == 1)
		&& (mat[0][2] == 1) && (mat[1][3] == 1) && (mat[2][4] == 1) && (mat[3][5] == 1) && (mat[4][6] == 1)
		&& (mat[6][8] == 1) && (mat[6][7] == 1) && (mat[6][6] == 1) && (mat[6][5] == 1) && (mat[6][5] == 1) && (mat[6][4] == 1)
		&&  (mat[0][4] == 1) && (mat[0][5] == 1) && (mat[0][6] == 1) && (mat[0][7] == 1) && (mat[0][8] == 1) && (mat[0][9] == 1))
	{
			    system("cls");
				cout << endl << endl << endl << " PARABENS VOCE ACHOU TODAS AS PALAVRAS!!" << endl << endl;
				return 1;
			}
}		
