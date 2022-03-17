#include<iostream>
using namespace std;
//int a[10001];

struct node {
	int add, key, next;
	bool flag;
};
node b[10001];
void quicksort(int left,int right)
{
	int i, j;
	node p,t;
	if (left > right)
		return;
	p = b[left];
	j = left;
	i=right;
	while (i != j)
	{
		while (b[j].key >= p.key && i < j) {
			j--;
		}
		while (b[i].key <= p.key && i < j)
		{
			i++;
		}

		if (i < j)
		{
			t = b[i];
			b[i] = b[j];
			b[j] = t;
		}
	}
	b[left] = b[i];
	b[i] =p;
	quicksort(left, i - 1);
	quicksort(i + 1, right);



}

int main()
{
	int cnt = 0;
	
	int n,s; cin >> n>>s;
	for (int i = 0; i < n; i++)
	{
		int A, K, N;
		cin >> A >> K >> N;
		b[A] = { A,K,N,0 };
	}
	for (int i = s; i != -1; i = b[i].next)
	{
		b[i].flag = 1;
		cnt++;
	}
	if (cnt == 0)
	{
		cout << "0 -1";

	}
	else
	{
		quicksort(0, 10000);
		int i = s;
		while (cnt)
		{
			if (b[i].flag)
			{
				cout << b[i].add << " " << b[i].key << " " << b[i].next<<endl;
				i++;cnt--;
			}
			
		}

	}
}