#include<iostream>
#include<iomanip>
using namespace std;

int c[256];//储存
int k;
int t;
bool u;
int main() {
	string a;//店里的
	string b;//想要的
	cin >> a >> b;

	for (int i = 0; i < a.length(); i++)
	{
		c[a[i]]+=1;
		
	}//对应字符出现次数加一

	for (int j = 0; j < b.length(); j++)
	{
		c[b[j]]-=1;
	}//对应字符出现次数减一

	for (int i = 0;i < 256;i++)
	{
		
			t += c[i];//t可正可负
		
	}
	if (t >= 0) {
		cout << "YES " << t;
	}
	
	{
		cout << "NO " << abs(t);
	}
	return 0;
}