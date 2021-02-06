#include <iostream>
using namespace std;
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    float i;
    int count = 0;
    for(int j = 0; j < 6; j++){
        cin >> i;
        if(i > 0) count ++;
    }
    cout << count << " valores positivos" << endl;
    return 0;
}