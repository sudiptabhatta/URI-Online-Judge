#include <iostream>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    double A, B, C;
    cin >> A >> B >> C;
    printf("TRIANGULO: %0.3f\n", 0.5*A*C); 
    printf("CIRCULO: %0.3f\n", 3.14159*C*C);
    printf("TRAPEZIO: %0.3f\n", (0.5*(A+B)*C));
    printf("QUADRADO: %0.3f\n", B*B);
    printf("RETANGULO: %0.3f\n", A*B);
    return 0;
}