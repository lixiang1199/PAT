#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	int a[10];//储存10个数字的个数
	for (int i = 0; i < 10; i++)
	{
		cin >> a[i];
	}

	if (a[0] == 0) {
		for (int i = 1; i < 10; i++)
		{
			while (a[i] != 0) {
				cout << i;
				a[i]--;
			}//输出一次，个数减一
		}
	}

	else {
		for (int i = 1; i < 10; i++) {
			if(a[i] > 0) {
				cout << i;
				a[i]--;
				break;
			}
			
			
		}

		while (a[0] > 0) {
			cout << 0;
			a[0]--;
		}//输入一个0外最小数后，输出所有0

		for (int i = 1; i < 10; i++) {
			while (a[i] > 0) {//个数错了，查while和if是否用对
				cout << i;
				a[i]--;
			}
			//输出其他剩余
		}
	}

	return 0;

}