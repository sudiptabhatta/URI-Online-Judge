#include <iostream>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int input, maximum = 0, position; 
    for(int i = 1; i <= 100; i++){
        cin >> input;
        if(maximum < input){
            maximum = input;
            position = i;
        }
    }
    printf("%d\n%d\n", maximum, position);
    return 0;
}