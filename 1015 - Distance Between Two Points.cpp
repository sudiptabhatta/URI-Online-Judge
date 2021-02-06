#include <bits/stdc++.h> 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    double x1, y1, x2, y2;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("%0.4f\n", distance);
    return 0;
}