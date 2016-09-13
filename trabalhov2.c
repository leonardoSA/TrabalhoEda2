/*

 */
#include <stdio.h>
#include <stdlib.h>
#define Tam	11

typedef struct no{
	int chave;
	char palavra;
	int idade;
}noArq;

int calcHas1(chave){
	int res1;
	res1 = chave % Tam;
return res1;
}

int calcHas2(chave){
	int res2;
	res2 = chave / Tam;
	if (res2 == 0){
		res2 = 1;}
return res2;
}

int calDuplo(	) 		


int main(int argc, char **argv)
{

    return 0;
}

