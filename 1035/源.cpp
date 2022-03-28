
#include<iostream>
using namespace std;

class account
{
public:
	string name, password;
	bool modify = 0;
};

bool needscorrect(char& c)
{
	if (c == '0')
		c = '%';
	else if (c == '1')
		c = '@';
	else if (c == 'l')
		c = 'L';
	else if (c == 'O')
		c = 'o';
	else return 0;

	return 1;
}

account a[1000];

int main()
{
	int cnt = 0;
	int N, i, j, k;
	cin >> N;

	for (i = 0; i < N; i++)
	{
		cin >> a[i].name >> a[i].password;
	}
	for (i = 0; i < N; i++)
	{
		for (char& c : a[i].password)
		{//   使用引用进行原地修改
			if (needscorrect(c))
			{
				a[i].modify = 1;
			}
		}
		cnt += a[i].modify;
	}
	if (cnt)
	{
		cout << cnt << endl;
		for (i = 0; i < N; i++)
		{
			if (a[i].modify)
			{
				cout << a[i].name << " " << a[i].password << endl;
			}
		}
	}

	else
	{
		if (N == 1)
			cout << "There is " << N << " account and no account is modified";
		else
			cout << "There are " << N << " accounts and no account is modified";

	}

}