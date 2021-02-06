#include <iostream>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int a, b, c;
    cin >> a >> b >> c;
    int Maior_AB = (((a + b + abs(a-b))/2)+c + abs(((a + b + abs(a-b))/2)-c))/2;
    cout << Maior_AB << " eh o maior" << endl;
    return 0;
}