#include "tema1.h"
#include "tema2.h"
#include "tema3.h"
#include "matriz.h"
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;


int main (void)
{
	int num,r;
	int z=0,f;

 
	cout << endl;
	cout << "                          ~~~~ CACA-PALAVRAS ~~~~";
	cout << endl << endl << endl;
	cout<<" O objetivo do jogo e encontrar as palavras encondidas nas letras do tabuleiro,\n em relacao ao tema escolhido.";
	cout<<"\n\n COMANDOS: Use as setas do teclado ";printf("(%c %c %c %c)",30,17,16,31);cout<<" para mover-se pelas letras.\n           Use a tecla ESPACO para selecionar as letras, uma por uma.\n           Use a tecla \"s\" para salvar a palavra selecionada.";
	cout<<"\n\n Escolha um tema:\n 1 - Frutas\n 2 - Paises\n 3 - Animais\n\n ";
	cout << "Digite qual tema deseja jogar: ";
	cin >> num;

	if((num!=1) && (num!=2) && (num!=3))
	{
		do{
			cout << endl << endl << " DIGITE SOMENTE 1, 2 OU 3";
			cout<<"\n\n Escolha novamente um tema:\n 1 - Frutas\n 2 - Paises\n 3 - Animais\n\n ";
			cout << "Digite qual tema deseja jogar: ";
			cin >> num;
		}while((num!=1) && (num!=2) && (num!=3));
	}
	
	system("cls");

	if (num == 1)
	{
		tema1 TEMA(num);
		cout << endl;
		TEMA.desenha_tabuleiro();
		cout << endl << endl << endl;
		cout << " As palavras sao: \n uva|maca|pera|caqui|manga|banana|cereja|morango|maracuja|melancia" << endl << endl;

		while(z==0)
		{
			r = TEMA.comando();

			if(r==0)
				cout << endl << endl << " A palavra nao se encontra no jogo" << endl << endl << endl;
			if(r==1)
				cout << endl << endl << " A palavra esta correta" << endl << endl << endl;

			f = TEMA.fim_jogo();

			if (f == 1)
				z++;

		}
	}

	if (num == 2)
	{
		tema2 TEMA(num);
		cout << endl;
		TEMA.desenha_tabuleiro();
		cout << endl << endl << endl;
		cout << " As palavras sao: \n peru|chile|china|brasil|franca|mexico|russia|espanha|portugal|colombia" << endl << endl;

		while(z==0)
		{
			r = TEMA.comando();

			if(r==0)
				cout << endl << endl << " A palavra nao se encontra no jogo" << endl << endl << endl;
			if(r==1)
				cout << endl << endl << " A palavra esta correta" << endl << endl << endl;

			f = TEMA.fim_jogo();

			if (f == 1)
				z++;

		}
	}

	if (num == 3)
	{
		tema3 TEMA(num);
		cout << endl;
		TEMA.desenha_tabuleiro();
		cout << endl << endl << endl;
		cout << " As palavras sao: \n gato|lobo|pato|rato|urso|vaca|ganso|tigre|camelo|coiote" << endl << endl;

		while(z==0)
		{
			r = TEMA.comando();

			if(r==0)
				cout << endl << endl << " A palavra nao se encontra no jogo" << endl << endl << endl;
			if(r==1)
				cout << endl << endl << " A palavra esta correta" << endl << endl << endl;

			f = TEMA.fim_jogo();

			if (f == 1)
				z++;
		}
	}
	
	cout << endl << endl << endl;

	system("pause");
	return 0;
}
