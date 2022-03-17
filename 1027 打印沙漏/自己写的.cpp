#include<iostream>
#include<iomanip>
using namespace std;
#if 0
int p() {
	int i;
	cin >> i;
	char s;
	cin >> s;
	int  m = 1;
	int n = 1;//以n=1开始，向两边开始打印
	while (i >= m)//当输入字符比可打印的字符大时
	{
		++n;//加一行
		m = m + 2 * (2 * n - 1);//分别在两侧打印
		//判断m是否超出了i个的范围


	}
	int l;//记录行数
	l = n - 1;//除多余的
	int ln = l;
	//for

	int hj = 0;//空格数
	int lo = 0;//记录hj被减了几次
	int p;//沙漏剩余数量
	p = m - 2 * (2 * l - 1);

	for (; l > 0; l--)
	{
		int ci = 2 * l - 1;


		if (hj == 0) {
			while (ci != 0) {
				cout << s;//<< " ";
				ci--;

			}
			hj++;
			cout << endl;

		}
		else {
			while (ci != 0) {
				while (hj > 0)
				{
					cout << " ";
					hj--;
					lo++;//记录hj被减了几次
				}
				cout << s;//<< " ";
				ci--;

			}
			hj += lo;
			hj++;

			lo = 0;//重置次数
			cout << endl;
		}
	}


	//打印下半部分
	int lu = 0;
	lu += hj - 2;
	while (lu != 0) {
		cout << " ";
		lu--;
	}
	int ch = 0;
	int ce = ln - 1;
	int pi = 2 * ce - 1;
	for (; ce > 0; ce--)
	{
		pi += ch;
		while (pi != 0)
		{
			cout << s;
			pi--;
			ch++;
		}
		pi += 2;
		cout << endl;
	}








	//输出剩余个数

	//cout << p-m;

}
#endif // 0
