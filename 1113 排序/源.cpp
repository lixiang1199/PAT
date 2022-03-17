#include<iostream>
#include<algorithm>
using namespace std;

int N;
int a[100000];
int main()
{
	int i;
	cin >> N;
	for (i = 0; i < N; i++)
		cin >> a[i];
		sort(a, a + N);
	if (N % 2)cout << 1;
	else cout << 0;
	cout << " ";
	int s1, s2;
	for (s1 = 0, i = 0; i < N / 2; i++)
		s1 += a[i];
	for (s2 = 0/*, i = N/2*/; i < N ; i++)
		s2 += a[i];
	cout << s2 - s1;//后者一定比前者大，所以不需要abs
	return 0;
}