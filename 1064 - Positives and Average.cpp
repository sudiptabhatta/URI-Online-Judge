#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    float i, average=0, sum = 0;
    int count = 0;
    for(int j = 0; j < 6; j++){
        cin >> i;
        
        if(i > 0){
            count = count + 1;
            sum = sum + i;
        }
    }
    
    average = sum/count;
    cout << count << " valores positivos" << endl;
    printf("%0.1f\n", average);
    return 0;
}