#include<iostream>
#include<map>
using namespace std;
//terms 项  // polynomials 多项式   // exponent 指数  //coefficients 系数
int main()
{
	map<int,double>factor;//系数
	int K;
	cin >> K;
	while (K--)//多项式A k次
	{
		int n;
		double d;
		cin >> n >> d;//次数 和 系数
		factor[n] += d;
	}
	cin >> K;
	while (K--)//B k次
	{
		int n;
		double d;
		cin >> n >> d;//次数 和 系数
		factor[n] += d;
		if (factor[n] == 0)//正负相消的情况
		{
			factor.erase(n);
		}
	}
	cout << factor.size();
	for (auto it=factor.end();it!=factor.begin();)
	{
		--it;
		//map的最后一个数不存在
			printf(" %d %.1f", it->first, it->second);
	}

	return 0;
}