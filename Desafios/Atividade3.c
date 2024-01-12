
#include <stdio.h>
#include <string.h>

int main() {
    char string[100];
    int inicio, fim;
    
    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);
    
    printf("Digite a posição inicial da substring: ");
    scanf("%d", &inicio);
    
    printf("Digite a posição final da substring: ");
    scanf("%d", &fim);
    
    // Removendo o caractere de nova linha da string
    string[strcspn(string, "\n")] = '\0';
    
    char substring[100];
    int j = 0;
    
    for (int i = inicio; i <= fim; i++) {
        substring[j] = string[i];
        j++;
    }
    
    substring[j] = '\0';
    
    printf("Substring: %s\n", substring);
    
    return 0;
}