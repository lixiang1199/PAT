#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>left, right;
	int N, M, a[100000];
	cin >> N >> M;
	int i, j, k,sum;
	for (i = 0; i < N; i++)
	{
		cin >> a[i];
	}
	int minbigger = 99999999;


	for (i = j = 0,sum=0; j < N || sum >= M;)
	{
		if (sum<M)
		{
			sum += a[j++];
		}
		else if (sum > M) 
		{
			if (sum < minbigger)minbigger = sum;
			sum -= a[i--];
		}
		else 
		{
			left.push_back(i + 1);
			right.push_back(j);
			sum -= a[i];
			i++;
		}
	}
	if (left.size())
	{
		for (i = 0; i < left.size(); i++)
			cout << left[i] << "-" << right[i] << endl;
	
return 0;
	}
	M = minbigger;

	for (i = j = 0, sum = 0;j<N || sum>=M;)
	{
		if (sum < M)
		{
			sum += a[j++];
		}
		else if (sum > M)
		{
			
			sum -= a[i--];
		}
		else
		{
			left.push_back(i + 1);
			right.push_back(j);
			sum -= a[i];
			i++;
		}
	}
	if (left.size())
	{
		for (i = 0; i < left.size(); i++)
			cout << left[i] << "-" << right[i] << endl;

		return 0;
	}
	
}