#include<iostream>
#include<string>
using namespace std;

//Palindromic ���Ľṹ 

bool ispalindromic(int digit[], int len)//���������������鳤
{
	int i;
	for (i = 0; i < len; i++)
		if (digit[i] != digit[len - 1 - i])
			break;//����ƥ��
	if (i == len )
		return 1;//ƥ�����
	else
		return 0;//ƥ���ж�
}

int digit_of_num(int num)
{
	int weishu = 0;
	while (num)
	{
		num /= 10;
		weishu++;
	}
	return weishu;
}

int main()
{
	//long long N;//he initial number
	//int a[100], b[100],c[100];//��ʱ����
	//int i,j;
	//int K;//the maximum number of steps.
	//cin >> N >> K;
	//long long temp = N;
	//while (K--)
	//{
	//	for (i = digit_of_num(temp), j = 0; i > 0 && j < digit_of_num(temp); i--, j++)
	//	{
	//		b[j] = a[i] = N % 10;
	//		N /= 10;
	//	}
	//	for (i = 0; i < digit_of_num(temp); i++)
	//	{
	//		c[i] = b[i] + a[i];
	//	}
	//}

	int digit[100] = { 0 }, rev[100];
	int K, i, j, len;
	long long N;
	cin >> N >> K;
	string s = to_string(N);//to_string����
	for (i = 0; i < s.size(); i++)
		digit[i] = s[s.size() - 1 - i] - '0';//һ��Ҫע��char��string�������� int ���� ֮���ת��
	len = s.size();
	j = 0;
	while (!ispalindromic(digit, len))//û��ƥ����� �� û���ж�
	{
		for (i = 0; i < len; i++)
			rev[i] = digit[len - 1 - i];//����
		int jinwei = 0;
		for (i = 0; i < len; i++) 
		{
			digit[i] += rev[i] + jinwei;//��λ
			if (digit[i] >= 10)
			{
				digit[i] -= 10;
				jinwei = 1;//��λ
			}
			else jinwei = 0;
		}
		if (jinwei == 1)//�����Ҫ��λ
		{
			digit[len] = 1;//digit��ʵ�ǵ��õģ����һ��1���뵽��󼴿�
			len++;
		}
		if (++j == K)break;//δ���ڹ涨��������� ��> ��ǰ����
	}
	for (i = len - 1; i >= 0; i--)
	{
		cout << digit[i];
	}
	cout << endl;
	cout << j;

	return 0;
}