#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int s3[256];//��¼���ֹ����ַ�
int main() {
	string s1;//���̴���
	string s2;//ʵ�����
	cin >> s1 >> s2;
	for(int i=0;i<s2.length();i++)
	{
		if (s2[i] >= 'a' && s2[i] <= 'z') {//���������string�ĸ�
			s2[i] += 'A' - 'a';//ȫ��ת��Ϊ��д
	}
		s3[s2[i]]=1;//��¼���

	}//��¼

	for (int i = 0;i < s1.length(); i++)//��֤
	{

		if (s1[i] >= 'a' && s1[i] <= 'z') {
			s1[i] += 'A' - 'a';//���ַ���ȫ����Ϊ��д
		}

		if(s3[s1[i]]!=1)
		{
			cout << s1[i];
			s3[s1[i]] = 1;//������¼����ʾ�Ѿ������

		}


	}
	

	return 0;

}