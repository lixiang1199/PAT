#include<iostream>
#include<map>
using namespace std;
//terms ��  // polynomials ����ʽ   // exponent ָ��  //coefficients ϵ��
int main()
{
	map<int,double>factor;//ϵ��
	int K;
	cin >> K;
	while (K--)//����ʽA k��
	{
		int n;
		double d;
		cin >> n >> d;//���� �� ϵ��
		factor[n] += d;
	}
	cin >> K;
	while (K--)//B k��
	{
		int n;
		double d;
		cin >> n >> d;//���� �� ϵ��
		factor[n] += d;
		if (factor[n] == 0)//�������������
		{
			factor.erase(n);
		}
	}
	cout << factor.size();
	for (auto it=factor.end();it!=factor.begin();)
	{
		--it;
		//map�����һ����������
			printf(" %d %.1f", it->first, it->second);
	}

	return 0;
}