#include<iostream>
#include<iomanip>
//#include<time.h>

using namespace std;

int main() {
	//float c1=clock();

	//float c2=clock();
	//float a=(c2 - c1) / CLK_TCK;
	//cout << c1 << " " << c2;
	int c1, c2;
	cin >> c1 >> c2;
	int c = 100;

	int s = (c2 - c1 + 50) / c;//������

	int h = s / 3600;//Сʱ��

	int m = (s - h * 3600) / 60;//������

	int se = s - h * 3600 - m * 60;//��ʾ������

	if (h < 10)
		cout << "0";

	cout << h << ":";
	if (m < 10)
		cout << "0" << m;
	else
		cout << m;

	cout << ":";

	if (se < 10)
		cout << "0" << se;
	else
		cout << se;



	return 0;

}
