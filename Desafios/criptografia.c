
#include <stdio.h>
#include <ctype.h>

void cifraDeCesar(char *mensagem, int chave) {
    int i = 0;
    while (mensagem[i] != '\0') {
        if (isalpha(mensagem[i])) {
            char letra = toupper(mensagem[i]);
            letra = (letra - 'A' + chave) % 26 + 'A';
            mensagem[i] = islower(mensagem[i]) ? tolower(letra) : letra;
        }
        i++;
    }
}

int main() {
    char mensagem[100];
    int chave;

    printf("Digite a mensagem: ");
    fgets(mensagem, sizeof(mensagem), stdin);

    printf("Digite a chave: ");
    scanf("%d", &chave);

    cifraDeCesar(mensagem, chave);

    printf("Mensagem codificada: %s", mensagem);

    return 0;
}