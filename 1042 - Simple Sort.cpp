#include <iostream>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int a, b, c, array[3], temp;
    cin >> a >> b >> c;
    array[0] = a;
    array[1] = b;
    array[2] = c;
    
    for(int i = 0; i < 3; i++){
     for(int j = 0; j < 3; j++){
         if(array[i] < array[j]){
             temp = array[j];
             array[j] = array[i];
             array[i] = temp;
         }
     }
    }
    
    for(int i = 0; i < 3; i++){
        printf("%d\n", array[i]);
    }
     cout << endl;
    printf("%d\n%d\n%d\n", a, b, c);
    
    return 0;
}