#include<iostream>
using namespace std;
int book[256];
int main() {

	string a, b;
	cin >> a >> b;

	for (int i = 0; i < a.length(); i++) {
		book[a[i]]++;//��¼ÿ���ַ����ֵĴ���
	}

	int lose = 0;//���˶����ַ�
	bool flag = 0;//���������
	for (int i = 0; i < b.length(); i++) {
		book[b[i]]--;//��ȥ���е�
	}
	for (int i = 0; i < 256; i++) {
		if (book[i] < 0) {//���˵�
			lose -= book[i];
			flag = 1;
		}
	}
	if (flag) {
		cout << "No " << lose;

	}

	else
		cout << "Yes " << a.length() - b.length();



}