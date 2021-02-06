#include <iostream>
 
using namespace std;
 
int main() {
	int T;
	cin >> T;
	int years = T / 365;
	int rem_days = T % 365;
	int months = rem_days / 30;
	int days = rem_days % 30;
	/*
	1 ano(s)
1 mes(es)
5 dia(s)
	*/
	cout << years << " ano(s)" << endl << months << " mes(es)" << endl << days << " dia(s)" << endl;
    
}