#include<iostream>
#include<iomanip>
#include<cstring>

using namespace std;

int main() {
	int c[128];//记录次数
	for (int i = 0; i < 128; i++) {
		c[i] = 0;
	}
	char a[1000];//储存字符
	cin.get(a, 1000);
	
	int len=strlen(a);//长度

	for (int i = 0; i < len; i++) {

		int b = a[i];

		if (b >= 65 && b <= 90) {
			b += 32;
		}//全部换为小写

		c[b]++;
	}
	
	int max = 0;//出现次数的最大值
	int ma=0;//出现最多的字符
	for (int j = 97; j < 123; j++)
	{
		if (c[j] > max) {
			max = c[j];
			ma = j;
		}
	}

	cout << char(ma) << " " << max;

	return 0;
}
//数组越界，看看有没有出现a[-1],或者超过数组的部分