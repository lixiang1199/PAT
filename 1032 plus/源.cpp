#include<iostream>
using namespace std;

struct node {
	char data;
	int next;
	bool flag;
};

int main()
{
	int n, s1, s2;
	cin >> s1 >> s2 >> n;
	int i;
	node a[10001];
	int b, d;
	char c;
	for (i = 0; i < n; i++)
	{
		cin >> b >> c >> d;
		a[b] = { c,d,0 };
	}
	for (i = s1; i != -1; i = a[i].next)
	{
		a[i].flag = 1;
	}
	for (i = s2; i != -1; i = a[i].next)
	{
		if (a[i].flag == 1) {
			cout << i;
			return 0;
		}
	}
	cout << -1;
	return 0;
}