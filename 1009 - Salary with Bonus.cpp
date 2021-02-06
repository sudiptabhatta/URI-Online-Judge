#include <iostream>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    char fname[50];
    double salary, value;
    cin >> fname >> salary >> value;
    double total_sold_percent = value*.15;
    double total = salary + total_sold_percent;
    printf("TOTAL = R$ %0.2f\n", total);
    return 0;
}