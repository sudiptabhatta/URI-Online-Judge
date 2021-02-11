#include <iostream>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int N, X;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> X;
        if(X%2==0 && X>0){
            cout << "EVEN POSITIVE" << endl;
        } else if(X%2==0 && X<0){
            cout << "EVEN NEGATIVE" << endl;
        } else if(X%2!=0 && X>0){
            cout << "ODD POSITIVE" << endl;
        } else if(X%2!=0 && X<0){
            cout << "ODD NEGATIVE" << endl;
        } else if(X == 0){
            cout << "NULL" << endl;
        }
    }
    
    return 0;
}