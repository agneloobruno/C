#include <stdio.h>

int main() {
    int X = 0, Y = 0;

    scanf("%d %d", &X, &Y);

    if(X % 2 == 0) {
        X++;
    }

    while(Y != 0){
        X = X + 2;
    }

    printf("%d", X);
    
    return 0;
}