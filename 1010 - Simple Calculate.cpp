#include <iostream>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int a[2], b[2];
    float c[2];
    for(int i = 0; i < 2; i++){
        scanf("%d %d %f", &a[i], &b[i], &c[i]);
    }
    float value_to_pay = ((b[0]*c[0]) + (b[1]*c[1]));
    printf("VALOR A PAGAR: R$ %0.2f\n", value_to_pay);
    return 0;
}