#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	int n;//行数
	char p;//正确与否
	char num;//对应选项
	cin >> n;//输入行数
	int m[100];//储存密码
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 4; j++) {
			cin >> num;
			getchar();
			cin >> p;
			if (p == 'T')
			{
				m[i] = num;		
			//使用break语句导致了错误
			}
		}
	}
		for (int k = 0; k < n; k++) {
			if (m[k] == 'A')
			{
				cout << 1;
			}
			else if (m[k] == 'B')
			{
				cout << 2;
			}
			else if (m[k] == 'C') {
				cout << 3;
			}
			else cout << 4;
		}

		return 0;
	}




