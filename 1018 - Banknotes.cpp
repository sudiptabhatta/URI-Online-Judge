#include <iostream>
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int N;
    cin >> N;
    cout << N << endl;
    int a = N/100;
    int rem = N%100;
    int b = rem/50;
    rem = rem%50;
    int c = rem/20;
    rem = rem%20;
    int d = rem/10;
    rem = rem%10;
    int e = rem/5;
    rem = rem%5;
    int f = rem/2;
    rem = rem%2;
    int g = rem/1;
    rem = rem%1;
    printf("%d nota(s) de R$ 100,00\n", a);
    printf("%d nota(s) de R$ 50,00\n", b);
    printf("%d nota(s) de R$ 20,00\n", c);
    printf("%d nota(s) de R$ 10,00\n", d);
    printf("%d nota(s) de R$ 5,00\n", e);
    printf("%d nota(s) de R$ 2,00\n", f);
    printf("%d nota(s) de R$ 1,00\n", g);
    return 0;
}