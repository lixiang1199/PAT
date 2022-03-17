#include<iostream>
#include<iomanip>
using namespace std;
int a[1000];
int f, z;
int main() {
	string s1;
	string s2;

	cin >> s1 >> s2;
	for (int i = 0; i < s1.length(); i++)
	{
		a[s1[i]]++;
	}
	for (int i = 0; i < s2.length(); i++)
	{
		a[s2[i]]--;
	}

	for (int i = 0; i < 1000; i++)
	{
		if (a[i] < 0)
		{
			f += abs(a[i]);
		}
		if (a[i] > 0) {
			z += a[i];
		}

	}

	if (f > 0)
	{
		cout << "No " << f;
	}

	else
	{
		cout << "Yes " << s1.length() - s2.length();
	}
	return 0;
}