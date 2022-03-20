#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main()
{
	string a, b, t;
	getline(cin, a);
	for (char& c : a)
		c=tolower(c);
	//cin >> a;
	cout << endl << a.length()<<endl;
	for (int i=0;i<=a.length();i++)
		cout << a[i]<<" ";
	cout << endl;
	cout << a + "ABCD";

	return 0;
}