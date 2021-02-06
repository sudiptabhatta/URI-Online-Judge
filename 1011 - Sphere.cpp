#include <iostream>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    double R;
    double PI = 3.14159;
    cin >> R;
    double sphere = (4/3.0)*PI* R * R* R;
    printf("VOLUME = %0.3f\n", sphere);
    return 0;
}