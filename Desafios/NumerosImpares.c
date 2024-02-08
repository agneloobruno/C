#include<stdio.h>

int main(){
    int X = 0;

    scanf("%d", &X);

    if(1 <= X <= 100) {
        for(int i = 1; i <= X; i++){
            if(i % 2 != 0) {
                printf("%d\n", i);
            }
        }
    }

    return 0;
}