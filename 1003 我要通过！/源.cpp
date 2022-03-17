#include<iostream>
#include<iomanip>
using namespace std;
bool juge(string);
int main() {
	int n;
	cin >> n;
	string a;
	for (int i = 0; i < n; i++) {

		cin >> a;
		juge(a);
	}


	return 0;
}

bool juge(string b) {
	for (int i = 0; i < b.length(); i++) {
		if(b[i]=='P'||b[i]=='A'||b[i]=='T')
	}
}