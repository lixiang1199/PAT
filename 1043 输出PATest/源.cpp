#include<iostream>
#include<iomanip>

using namespace std;
int P = 0, A = 0, T = 0, e = 0, s = 0, t = 0;//次数
int main() {
	string a;

	cin >> a;

	for (int i = 0; i < a.length(); i++)
	{
		if (a[i] == 'P')
			P++;

		if (a[i] == 'A')
			A++;

		if (a[i] == 'T')
			T++;

		if (a[i] == 'e')
			e++;

		if (a[i] == 's')
			s++;

		if (a[i] == 't')
			t++;


	}

	int min;//输出几次取决于最少的字符

	int ci[6] = { P,A,T,t,e,s };//次数储存在数组中
	min = ci[0];//从第一个开始
	for (int i = 0; i < 6; i++)
	{
		if (ci[i] < min)
		{
			min = ci[i];//以最小的为准
		}

	}

	for (int i = 0; i < min; i++)
	{
		cout << "PATest";


	}
	//先cout min个

	while (P > min || A > min || T > min || t > min || e > min || s > min) {
		if (P > min) {
			cout << "P";
			P--;
		}
		if (A > min) {
			cout << "A";
			A--;
		}
		if (T > min) {
			cout << "T";
			T--;
		}


		if (e > min) {
			cout << "e";
			e--;
		}
		if (s > min) {
			cout << "s";
			s--;
		}

		if (t > min) {
			cout << "t";
			t--;
		}
	}

	return 0;
}