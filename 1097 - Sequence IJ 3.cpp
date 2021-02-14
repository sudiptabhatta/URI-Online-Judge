#include <iostream>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int x = 7, y = 5;
    for(int i = 1; i <= 9; i = i + 2){
        for(int j = x; j >= y; j--){
            printf("I=%d J=%d\n", i, j);
        }
        y = x;
        x = x + 2;
    }
    return 0;
}