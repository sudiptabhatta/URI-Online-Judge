#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int N;
    cin >> N;
    for(int i = 1; i <= N; i++){
        if(i%2 == 0){
            printf("%d^2 = %d\n", i, i*i);
        }
    }
    return 0;
}