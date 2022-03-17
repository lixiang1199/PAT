#include<iostream>
#include<iomanip>
using namespace std;
struct node {
	int add, key, next;
};
void reverse(node s[], int a, int b)
{
	int len = b - a;
	int  i, j;
	node t;
	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		t = s[i];
		s[i] = s[j];
		s[j] = t;
	}
}


node a[10000];
int main()
{
	int  s, k, n;
	cin >> s >> n >> k;
	int d, b, c;
	int order[1000][2] = {s,}, m = 1, int stack[100] = {0};
	for (int i = 0; i < n; i++)
	{
		cin >> d >> b >> c;
		a[i] = { d,b,c };
		/*if (d == order[m-1]) {
			order[m++] = d;
		}*/
	}
	int i = 0;
	while (i < k) {
		reverse(a, i, i + k);
		i += k;
	}

	for (int i = 0; i < n; i++)
	{
		cout << setw(5) << setfill('0') << a[i].add << " " << a[i].key << " " << a[i].next << endl;
	}
	/*int a[10] = {1,2,3,4,5,6,7,8,9,10};
	reverse(a,0,8);
	for(int i=0;i<=9;i++)
	cout << a[i]<<" ";*/


	return 0;

}