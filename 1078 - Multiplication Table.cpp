#include <iostream>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int N;
    cin >> N;
    for(int i = 1; i<=10; i++){
        printf("%d x %d = %d\n", i, N, i*N);
    }
    return 0;
}