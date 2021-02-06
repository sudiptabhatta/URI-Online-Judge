#include <iostream>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int T;
    int N[1000];
    cin >> T;
    int k = 0;
    for(int i = 0; i < 1000; i ++){
        N[i] = k;
        k++;
        if (k == T){
        	k = 0;
        }
    }
    
    for(int i = 0; i < 1000; i ++){
        cout << "N[" << i << "] = " << N[i] << endl;
    }
    return 0;
}