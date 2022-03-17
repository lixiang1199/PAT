#include<iostream>
using namespace std;

struct node {
	char data;
	int next;
	bool flag;
};
//int add[10001];
int t;
int s1,s2;
//bool flag = 0,flag2=0;
int main()
{
	int n;
	int i;
	cin >>s1>>s2>>n;
	node a[10001];
	int  b, d;
	char c;
	for (i = 0; i < n; i++)
	{
		
		/*cin >> b >> c >> d;*/
		scanf_s("%d %c %d", &b, &c, &d);

		//a[b].data = c;
		//a[b].next = d;
		//a[b].flag = 0;//全部标记为未访问过	
		a[b] = { 'c',d,0};
	}
	for (i = s1; i != -1; i = a[i].next)
	{
		a[i].flag = 1;
	}
	for (i = s2; i != -1; i = a[i].next)
	{
		if (a[i].flag == 1)
		{
			cout << i;
			return 0;
		}
	}
	cout << -1;
	return 0;
	/*int nex;
	for (nex = s1;; nex = a[nex].next)
	{
		if (a[n])
		flag = 1;
	}
	for (nex = s2; nex != -1; nex = a[nex].next)
	{
		if (nex == -1)
		flag2 = 1;
	}
	if (flag && flag2)
		cout << nex;*/

}