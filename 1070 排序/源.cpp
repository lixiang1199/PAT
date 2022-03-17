#include<iostream>
#include<algorithm>
using namespace std;
struct mooncake {
	double amount, price,unitprice;
};
mooncake m[1000];
bool comp(mooncake x, mooncake y) {
	return x.unitprice > y.unitprice;//µ¥¼Û½µÐò
}
int main()
{
	int N;
	double D;
	cin >> N >> D;
	for (int i = 0;i < N;i++)
	{
		cin >> m[i].amount;
	}
	for (int i = 0; i < N; i++)
	{
		cin >> m[i].price;
		m[i].unitprice = m[i].price / m[i].amount;
	}
	sort(m, m + N, comp);
	double profit = 0;
	for(int i=0;i<N;i++)
	{ 
		if (D > m[i].amount) {
			D -= m[i].amount;
			profit += m[i].price;
	}
		else {
			profit += m[i].unitprice * D;
			D = 0;
			break;
		}
	}
	printf("%.2f", profit);
}