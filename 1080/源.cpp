#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class school
{
	public:
		int quota,last;
		vector<int>admitted;

};

class applicant
{
	public:
		int Ge, Gi,G,prefer[5],rnk,id;
};

bool comp(applicant x, applicant y)
{
	if (x.G != y.G)
		return x.G > y.G;
	return x.Ge > y.Ge;
}

int N//学生
, M,//学校
K;//志愿
school s[100];
applicant a[40000];
int main()
{
	cin >> N >> M >> K;
	int i, j, k, l;
	for (i = 0; i < M; i++)
		cin >> s[i].quota;
	for (i = 0; i < N; i++)
	{
		cin >> a[i].Ge >> a[i].Gi;
		for (j = 0; j < K; j++)
			cin >> a[i].prefer[j];
		a[i].G = a[i].Ge + a[i].Gi;
		a[i].id = i;
	}
	sort(a, a + N, comp);

	for (i = 0; i < N; i++)
	{
		if (i == 0 || (a[i].G != a[i - 1].G || a[i].Ge != a[i - 1].Ge))
			a[i].rnk = i + 1;
		else
			a[i].rnk = a[i - 1].rnk;
	}

	for (i = 0; i < N; i++)
	{
		for(j=0;j<N;j++)
		{
			int k=a[i].prefer[j];
			if (s[k].admitted.size() < s[k].quota || a[i].rnk == a[s[k].last].rnk)
			{
				s[k].admitted.emplace_back(a[i].id);
				s[k].last = i;
				break;
			}
			
		}
	}
	for (i = 0; i < M; i++)
	{
		sort(s[i].admitted.begin(), s[i].admitted.end());
		for (j = 0; j < s[i].admitted.size(); j++)
		{
			if (j)
				cout << " ";
			cout << s[i].admitted[j];
		}
		cout << endl;
	}


	return 0;
}