#ifndef MATRIZH
#define MATRIZH
#include <iostream>
const int CIMA=72, BAIXO=80, ESQUERDA=75, DIREITA=77, ESPACO=32, SALVAR=115;

using namespace std;

class Matriz
{
protected:
	char matriz_jogo[10][10]; // matriz que mostra as letras do tabuleiro
	char letras_selecionadas[10][10]; // matriz usada para o uso do caracter "-" usado no tabuleiro para facilitar o jogo ao jogador
	char *palavra_formada; // ponteiro que será alocado dinamicamente um vetor que guarda os caracteres selecionados pelo jogador
	int mat[10][10]; // matriz auxiliar para saber quando uma palavra já foi acertada 
	int linha; // atributo que guarda a linha do caracter selecionado
	int coluna; // atributo que guarda a coluna do caracter selecionado
	int count; // atributo que contabiliza o número de caracteres selecionados
	int aux_l[10]; // vetor que salva as linhas dos caracteres selecionados
	int aux_c[10]; // vetor que salva as colunas dos caracteres selecionados
	int aux; // atributo usado para uso dos vetors aux_l e aux_c
public:
	Matriz(int);
	void desenha_tabuleiro();
	void set_aux(int,int);
	void set_contador(int);
	int get_contador();
	void set_palavra();
	void tornar_maiuscula();
	void salvar_matriz();
};

#endif