#include<iostream>
#include<vector>
using namespace std;

struct node {
	int key, next;
};

node n[100000];

int main()
{
	int i, j, k, head, N;
	cin >> head >> N;
	while (N--)
	{
		cin >> i >> j >> k;
		n[i].key = j;
		n[i].next = k;
	}

	bool book[10001] = { 0 };
	vector<int> v1, v2;
	for (i = head; i >= 0; i = n[i].next) {
		j = abs(n[i].key);
		if (book[j])
		{
			v2.push_back(i);
		}
		else
		{
			book[j] = 1;
			v1.push_back(i);
		}
	}//·ÖÀà
	for (i = 0; i < v1.size(); i++)
	{	if(i+1<v1.size())
			printf("%05d %d %05d\n", v1[i], n[v1[i]].key,v1[i+1]);
		else
		printf("%05d %d %d\n", v1[i], n[v1[i]].key, -1);
	}
	for (i = 0; i < v2.size(); i++)
	{
		if (i + 1 < v2.size())
			printf("%05d %d %05d\n", v2[i], n[v2[i]].key, v2[i + 1]);
		else
			printf("%05d %d %d\n", v2[i], n[v2[i]].key, -1);
	}
}