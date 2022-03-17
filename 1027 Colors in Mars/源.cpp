#include<iostream>
using namespace std;


int main() {
	int a[3],s,y;

	char c[14] = { "0123456789ABC" };
	for(int i=0;i<3;i++)
	cin >> a[i];
	cout << "#";
	for (int i = 0; i < 3; i++) {
		s = a[i] / 13;
		y = a[i] % 13;
		cout << c[s] << c[y];
	}

	return 0;

}