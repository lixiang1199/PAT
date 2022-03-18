#include<iostream>
using namespace std;
int book[10];
//permutation 排列
int main()
{
	char num[22];
	cin >> num;
	int flag = 0;

	int len = strlen(num);
	for (int i = len - 1; i >= 0; i--)
	{
		int temp = num[i] - '0';
		book[temp]++;
		temp = temp * 2 + flag;
		if (temp >= 10)
		{
			flag = 1;
			temp -= 10;
		}
		else
			flag = 0;

		num[i] = (temp + '0');
		book[temp]--;
	}
	
	int flag1 = 0;
	for (int i = 0; i < 10; i++)
	{
		if (book[i] != 0)
			flag1 = 1;
	}
	if (flag || flag1)cout << "No" << endl;
	else cout << "Yes" << endl;

	if (flag)cout << 1;
	cout << num;	
	return 0;

}