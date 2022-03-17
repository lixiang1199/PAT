#include<iostream>
using namespace std;
int a, p, t;
int main1() {
	string s;
	cin >> s;
	int len = s.length();
	
	for (int i = 0; i < len; i++) {

		if (s[i] == 'A') { a++; }
		if (s[i] == 'P') { p++; }
		if (s[i] == 'T') { t++; }
	}
	int min = a;
	if (p < min) { min = p; }
	if (t < min) { min = t; }
	cout << min;
}