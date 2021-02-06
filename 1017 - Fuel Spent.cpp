#include <iostream>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int  spent_time, average_speed;
    cin >> spent_time >> average_speed;
    int distance = spent_time*average_speed;
    float result = distance/12.0;
    printf("%0.3f\n", result);
    return 0;
}