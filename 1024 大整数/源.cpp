#include<iostream>
#include<string>
using namespace std;

//Palindromic 回文结构 

bool ispalindromic(int digit[], int len)//传入数组名和数组长
{
	int i;
	for (i = 0; i < len; i++)
		if (digit[i] != digit[len - 1 - i])
			break;//回文匹配
	if (i == len )
		return 1;//匹配完毕
	else
		return 0;//匹配中断
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
	//int a[100], b[100],c[100];//临时数组
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
	string s = to_string(N);//to_string函数
	for (i = 0; i < s.size(); i++)
		digit[i] = s[s.size() - 1 - i] - '0';//一定要注意char（string）类型与 int 类型 之间的转换
	len = s.size();
	j = 0;
	while (!ispalindromic(digit, len))//没有匹配完毕 或 没有中断
	{
		for (i = 0; i < len; i++)
			rev[i] = digit[len - 1 - i];//倒置
		int jinwei = 0;
		for (i = 0; i < len; i++) 
		{
			digit[i] += rev[i] + jinwei;//进位
			if (digit[i] >= 10)
			{
				digit[i] -= 10;
				jinwei = 1;//进位
			}
			else jinwei = 0;
		}
		if (jinwei == 1)//最后需要进位
		{
			digit[len] = 1;//digit其实是倒置的，最后一个1插入到最后即可
			len++;
		}
		if (++j == K)break;//未能在规定次数内完成 —> 提前跳出
	}
	for (i = len - 1; i >= 0; i--)
	{
		cout << digit[i];
	}
	cout << endl;
	cout << j;

	return 0;
}