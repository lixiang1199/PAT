#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	int sum = a + b;
	if (sum == 0)
	{
		cout << 0;
		return 0;
	}
	if (sum < 0)
	{
		cout << "-";
		sum *= -1;
	}
	//12,345,678
	vector<int> v;
	while (sum)
	{
		v.push_back(sum % 10);
		sum /= 10;
	}
	for (int i = v.size() - 1; i >= 0; i--)
	{
		cout << v[i];
		if (i!=0 && i % 3 == 0)cout << ",";
	}
	return 0;

}