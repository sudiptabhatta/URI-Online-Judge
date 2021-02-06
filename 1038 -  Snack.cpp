#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int X, Y;
    double price;
    cin >> X >> Y;
    if (X == 1){
        price = 4.00;
    }
    else if (X == 2){
        price = 4.50;
    }
    else if (X == 3){
        price = 5.00;
    }
    else if (X == 4){
        price = 2.00;
    }
    else if (X == 5){
        price = 1.50;
    }
    printf("Total: R$ %0.2f\n", Y*price);
    return 0;
}