/*

 */
#include <stdio.h>
#include <stdlib.h>
#define Tam 11

// typedef struct no{
//  int chave;
//  char palavra[20];
//  int idade;
// }no,*noArq;

struct no{
    int chave;
    char palavra[20];
    int idade;
};

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

int calDuplo(int chave){
    int duplo,x,y;

    x=calcHas1(chave);
    y=calcHas2(chave);

    duplo = (x+y) % Tam;
    return duplo;
}

void InsereNoArquivo(){ //sem consulta se registro existe ainda.
    struct no novo;
    FILE *fh;

    fh = fopen("testeBin.dat","r+b");
    if (fh==NULL){
        fh = fopen("testeBin.dat","w+b");
    }

    printf("Insira seus dados:(Posicao - nome - idade)\n");
    scanf("%d %s %d",&novo.chave,novo.palavra,&novo.idade);
    fseek(fh,(novo.chave-1)*sizeof(struct no), SEEK_CUR);
    fwrite(&novo,sizeof(struct no),1,fh);
    //rewind(fh);
    //fseek(fh,(novo.chave-1)*sizeof(struct no), SEEK_CUR);
    fclose(fh);
    printf("INSERIDO NO ARQUIVO COM SUCESSO!!!\n");
}

void ConsultaNoArquivo(){ //sem consulta se registro existe ainda.
    struct no novo;
    FILE *fh;
    int cont=0;

    fh = fopen("testeBin.dat","r+b");
    printf("Seus dados:Posicao - nome - idade\n");

    while(!feof(fh)){
        printf("Seus Dados: %d %s %d\n",novo.chave,novo.palavra,novo.idade);
        fread(&novo,sizeof(struct no), 1, fh);
        cont++;
    }
    fclose(fh);
    printf("CONSULTA NO ARQUIVO COM SUCESSO!!!\n");
}


int main(){
    int i;
    char op;

// for (i = 0; i < 3; ++i){
//  InsereNoArquivo();
// }

   //InsereNoArquivo();
 scanf("%c",&op);
        
while(opc=!'e'{    
    switch(opc){

     case 'i':
        InsereNoArquivo();
     case 'c':   
        ConsultaNoArquivo(); 
    }
}
   

    return 0;
}

