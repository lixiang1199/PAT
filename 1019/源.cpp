#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>digit;
	int N, b;
	cin >> N >> b;
	while (N)
	{
		digit.push_back(N % b);//��ÿ����ѹ��������
		N /= b;
	}
	int i, j, k;
	for (i = 0; i < digit.size(); i++)
	{
		if (digit[i] != digit[digit.size() - i - 1])
			break;
	}
	if (i == digit.size())//����˻����ж�
	{
		cout << "Yes\n";
	}
	else
	{
		cout << "No\n";
	}

	for (i = digit.size() - 1; i >= 0; i--)
	{
		cout << digit[i];//��ӡÿһ��vector�е���
		if (i)cout << " ";
	}
	return 0;
}