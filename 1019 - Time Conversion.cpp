#include <iostream>
 
using namespace std;
 
int main() {
	int T;
	cin >> T;
	int hours = T / 3600;
	int rem_s = T % 3600;
	int mins = rem_s / 60;
	int secs = rem_s % 60;
	
	cout << hours << ":" << mins << ":" << secs << endl;
    
}