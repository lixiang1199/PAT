#include<iostream>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int len = s.size();
	int n1,n3 = (len + 2) / 3;
	n1 = n3;
	int n2 = len + 2 - n1 - n3;
	//cout << n1 << " "<<n2 <<" "<< n3;
	for (int i = 0; i < n1-1; i++)
	{
		cout << s[i];
		for (int j = 0; j < n2 - 2; j++)
		{
			cout << " ";
		}
		cout << s[len-2 - i + 1]<<endl;
	}
	for(int i=n1-1;i<n1+n2-1;i++)
		cout << s[i];
	return 0;
}