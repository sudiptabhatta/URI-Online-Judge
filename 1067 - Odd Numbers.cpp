#include <iostream>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int X; 
    cin >> X;
    
    for(int i = 1; i <= X; i++){
        if(i % 2 != 0){
            printf("%d\n", i);
        }
    }
    return 0;
}