#include <iostream>
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int N, N2;
    scanf("%d.%d", &N, &N2);
    
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
    int a1 = rem/1;
    
    
    int b1 = N2/50;
    int rem1 = N2%50;
    int c1 = rem1/25;
    rem1 = rem1%25;
    int d1 = rem1/10;
    rem1 = rem1%10;
    int e1 = rem1/5;
    rem1 = rem1%5;
    int f1 = rem1/1;
    rem1 = rem1%1;
    
    cout << "NOTAS:" << endl;
    printf("%d nota(s) de R$ 100.00\n", a);
    printf("%d nota(s) de R$ 50.00\n", b);
    printf("%d nota(s) de R$ 20.00\n", c);
    printf("%d nota(s) de R$ 10.00\n", d);
    printf("%d nota(s) de R$ 5.00\n", e);
    printf("%d nota(s) de R$ 2.00\n", f);
    
    cout << "MOEDAS:" << endl;
    printf("%d moeda(s) de R$ 1.00\n", a1);
    printf("%d moeda(s) de R$ 0.50\n", b1);
    printf("%d moeda(s) de R$ 0.25\n", c1);
    printf("%d moeda(s) de R$ 0.10\n", d1);
    printf("%d moeda(s) de R$ 0.05\n", e1);
    printf("%d moeda(s) de R$ 0.01\n", f1);
    
    return 0;
}