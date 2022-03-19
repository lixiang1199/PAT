//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
//bool cmp(int a,int b)
//{
//	return a < b;
//}
//
//int main()
//{
//	int i, j, k;
//	int N;
//	vector<int>v;
//	cin >> N;
//	int m, n;
//	m=sqrt(N);
//	for (i = m; N % i != 0; i--);
//	m = i;
//	n = m + 1;
//	
//	for (i = 0; i < N; i++) 
//	{
//		cin >> j;
//		v.push_back(j);
//	}
//	sort(v.begin(),v.end(),cmp);
//	reverse(v.begin(), v.end());
//	int next[4][2] = 
//	{
//		{0,1},//右
//		{0,-1},//左
//		{-1,0},//上
//		{1,0}//下
//	};
//	int x = 1,y=1;
//
//	for (int each : v)
//	{
//		/*if (x > m || y > n || x <= 0 || y <= 0)
//			break;
//		if (x == m)
//			j = 3;
//
//		x += next[j][0];
//		y += next[j][1];
//		
//		if (x)cout << " ";
//		cout << v[each];*/
//
//		cout << v[each] << " ";
//	}
//	cout << endl;
//	
//
//}

#include<iostream>
#include<algorithm>
using namespace std;
int m, n;
int a[10000],N;
int main()
{	
	cin >> N;
	int i, j, k;
	for (i = 0; i < N; i++)
		cin >> a[i];
	sort(a, a + N);
	reverse(a, a + N);
	for (i = sqrt(N); i > 0; i--)
	{
		if (N % i == 0)
			break;
	}
	n = i;
	m = N / n;
	int ans[300][300];
	for (i = 0; i < 300; i++)
		for (j = 0; j < 300; j++)
			ans[i][j] = -1;

			//  右 下 左 上
	int di[] = { 0,1,0,-1 };
	int dj[] = { 1,0,-1,0 };
	i = 0, j = 0;
	int cur = 0,curdirection=0;
	while (1)
	{
		ans[i][j] = a[cur++];
		if (cur == N)
			break;//唯一出口
		int x, y;
		x = i + di[curdirection];
		y = j + dj[curdirection];
		if (x < 0 || x >= m || y < 0 || y >= n ||ans[x][y]>=0)
		{
			curdirection = (curdirection + 1)% 4;
			x = i + di[curdirection];
			y = j + dj[curdirection];
		}
		i = x, j = y;
	}

	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (j)cout << " ";
			cout << ans[i][j];
		}
		cout << endl;
	}
	return 0;
}
