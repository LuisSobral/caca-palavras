#ifndef TEMA2_PAISES
#define TEMA2_PAISES
#include "matriz.h"
#include <iostream>

using namespace std;

class tema2 : public Matriz
{
private:
	char palavra1[4], palavra2[5], palavra3[5], palavra4[6], palavra5[6], palavra6[6], palavra7[6], palavra8[6], palavra9[7], palavra10[8];
public:
	tema2(int);
	int comando();
	int verificar_palavra();
	int fim_jogo();
};

#endif