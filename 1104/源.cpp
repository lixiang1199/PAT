#include<iostream>
//1 2 3 4 5
using namespace std;
//0~n-1
int N;
long double a[100000];

int main()
{
	cin >> N;
	long double ans = 0;
	for (int i = 0; i < N; i++)
	{
		cin >> a[i];
		ans += a[i] * (i + 1) * (N - i);
	}
	printf("%.2llf", ans);

}