#include<iostream>
#include<iomanip>
using namespace std;

int c[256];//����
int k;
int t;
bool u;
int main() {
	string a;//�����
	string b;//��Ҫ��
	cin >> a >> b;

	for (int i = 0; i < a.length(); i++)
	{
		c[a[i]]+=1;
		
	}//��Ӧ�ַ����ִ�����һ

	for (int j = 0; j < b.length(); j++)
	{
		c[b[j]]-=1;
	}//��Ӧ�ַ����ִ�����һ

	for (int i = 0;i < 256;i++)
	{
		
			t += c[i];//t�����ɸ�
		
	}
	if (t >= 0) {
		cout << "YES " << t;
	}
	
	{
		cout << "NO " << abs(t);
	}
	return 0;
}