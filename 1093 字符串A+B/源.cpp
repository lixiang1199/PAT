#include<iostream>
#include<iomanip>
#include<cstring>
#include <string>
using namespace std;
int asc[128];

int main() {
	string a, b;
	getline(cin, a);//ʹ��cstring ��string ͷ�ļ�
	getline(cin, b);
	string c = a + b;
	int len = c.length();
	for (int i = 0; i < len; i++) {
		//�������string�ڵ��ַ��� cout << c[i] << endl;
		asc[c[i]]++;
		if (asc[c[i]] == 1) {//��һ�������֮����Ҳ�����
			cout << c[i];
		}

	}
	return 0;
}