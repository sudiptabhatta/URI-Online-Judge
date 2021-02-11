#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    int N;
    float a, b, c, result;
    cin >> N;
    for(int i = 0; i < N; i++){
        scanf("%f %f %f\n", &a, &b, &c);
        result = (a*2 + b*3 + c*5)/(2+3+5);
        printf("%0.1f\n", result);
    }
    return 0;
}