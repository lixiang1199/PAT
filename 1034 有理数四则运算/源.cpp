#include<iostream>//����д����һ��������������ֻ����ʾ��intλ
#include<iomanip>
using namespace std;

int a, c;
char b;
int r;//������

//int main() {
	cin >> a >> b >> c;
	switch (b)
	{
	case '+':
		r = a + c;
		cout << a << "+" << c << "=" << r;
		break;
	case '-':
		r = a - c;
		cout << a << "-" << c << "=" << r;
		break;
	case '*':
		r = a * c;
		cout << a << "*" << c << "=" << r;
		break;
	case'/':
		if (c == 0)
		{
			cout << a << " / 0 ==Inf";
		}
		else {
			r = a / c;
			cout << a << "/" << c << "=" << r;
		}
		break;
	default:
		break;
	}



	return 0;
	
	
	
}

