#include <iostream>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int N, X, inCount = 0, outCount = 0;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> X;
        if(X >= 10 && X <= 20){
            inCount++;
        } else {
            outCount++;
        }
    }
    printf("%d in\n", inCount++);
    printf("%d out\n", outCount++);
    return 0;
}