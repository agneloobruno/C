#include<stdio.h>

int main() {
    int x = 0;

    scanf("%d", &x);

    if(x % 2 == 0) {
        x += 1;
    }

    int i = 0;

    while (i < 6) {
        printf("%d\n", x);
        x += 2;
        i += 1;
    }
}