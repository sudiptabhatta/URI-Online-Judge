#include <iostream>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    float A, B, C;
    cin >> A >> B >> C;
    if((A + B) > C && (A + C) > B && (B + C) > A){
        printf("Perimetro = %0.1f\n", A+B+C);
    } else {
        printf("Area = %0.1f\n", ((A + B)*C)/2);
    }
    return 0;
}