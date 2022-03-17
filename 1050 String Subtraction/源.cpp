#include<iostream>
#include<string>
#include<vector>
using namespace std;
//bool a[128];
vector<bool> a(128);


int main() {
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);

	int len1 = s1.length();
	int len2 = s2.length();

	for (int i = 0; i < len2; i++) {
		a[s2[i]] = 1;
	}

	for (int i = 0; i < len1; i++) {
		if (!a[s1[i]]) {
			cout << s1[i];
		}
	}










	return 0;
}