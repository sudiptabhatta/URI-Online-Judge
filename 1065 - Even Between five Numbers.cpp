#include <iostream>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int i, count = 0;
    
    for(int j = 0; j < 5; j++){
        cin >> i;
        if(i%2 == 0){
            count = count + 1;
        }
    }
    cout << count << " valores pares" << endl;
    return 0;
}