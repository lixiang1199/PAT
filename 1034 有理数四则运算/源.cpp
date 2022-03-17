#include<iostream>//被编写成了一个计算器，除法只能显示到int位
#include<iomanip>
using namespace std;

int a, c;
char b;
int r;//计算结果

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

