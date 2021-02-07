#include <iostream>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int i, evenCount = 0, oddCount = 0, positiveCount = 0, negativeCount = 0;
    
    for(int j = 0; j < 5; j++){
        cin >> i;
        if(i%2 == 0){
            evenCount++;
        } if(i%2 != 0){
            oddCount++;
        } if(i > 0){
            positiveCount++;
        } if(i < 0){
            negativeCount++;
        }
    }
    cout << evenCount << " valor(es) par(es)" << endl;
    cout << oddCount << " valor(es) impar(es)" << endl;
    cout << positiveCount << " valor(es) positivo(s)" << endl;
    cout << negativeCount << " valor(es) negativo(s)" << endl;
    
    return 0;
}