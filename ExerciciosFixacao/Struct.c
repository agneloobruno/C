#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct {
    int dia, mes, ano;
}DataNasc;

typedef struct {
    DataNasc dataNasc;
    int idade;
    char sexo;
    char nome[100];
} Pessoa;

void imprimirPessoa(Pessoa p) {
    printf("\tNome: %s", p.nome);
    printf("\tIdade: %d\n", p.idade);
    printf("\tSexo: %c\n", p.sexo);
    printf("\tData de Nascimento: %d/%d/%d\n", p.dataNasc.dia, p.dataNasc.mes, p.dataNasc.ano);
}

void limpaBufferEntrada() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void dataAtual() {
    time_t mytime;
    mytime = time(NULL);
    struct tm tm = *localtime(&mytime);
    printf("Data: %d/%d/%d\n", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);
}

void calcIdade(Pessoa *p, time_t data) {
    struct tm *DataNasc = localtime(&data);
    p->idade = DataNasc->tm_year + 1900 - p->dataNasc.ano;
}

Pessoa lerPessoa() {
    Pessoa p;
    printf("Digite o seu nome: ");
    fgets(p.nome, 100, stdin);
    limpaBufferEntrada();
    printf("Digite sua data de nascimento no formato dd mm aaaa:");
    scanf("%d%d%d", &p.dataNasc.dia, &p.dataNasc.mes, &p.dataNasc.ano);
    limpaBufferEntrada();
    printf("Digite o seu sexo: [F/M] ");
    scanf("%c", &p.sexo);
    
    return p;
}

int main() { 
    time_t mytime;
    dataAtual();
    printf("\n\n");

    Pessoa pessoa;

    pessoa = lerPessoa();
    printf("\n\n");
    mytime = time(NULL);
    calcIdade(&pessoa, mytime);
    imprimirPessoa(pessoa);

    return 0;
}