#ifndef TEMA1_FRUTAS
#define TEMA1_FRUTAS
#include "matriz.h"
#include <iostream>

using namespace std;

class tema1 : public Matriz
{
private:
	// vetores das palavras encontradas nesse tema
	char palavra1[3],palavra2[4],palavra3[4],palavra4[5],palavra5[5],palavra6[6],palavra7[6],palavra8[7],palavra9[8],palavra10[8];
public:
	tema1(int);
	int comando();
	int verificar_palavra();
	int fim_jogo();
};

#endif