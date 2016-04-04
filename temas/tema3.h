#ifndef TEMA3_ANIMAIS
#define TEMA3_ANIMAIS
#include "matriz.h"
#include <iostream>

using namespace std;

class tema3 : public Matriz
{
private:
	char palavra1[4],palavra2[4],palavra3[4],palavra4[4],palavra5[4],palavra6[4],palavra7[5],palavra8[5],palavra9[6],palavra10[6];
public:
	tema3(int);
	int comando();
	int verificar_palavra();
	int fim_jogo();
};

#endif