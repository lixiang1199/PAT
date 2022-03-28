#include<iostream>
#include<vector>
using namespace std;
vector<int>pre, in , post;
bool unique=true;

void getIn(int preLeft, int preRight, int postLeft, int postRight)
{
	if (preLeft == preRight)//先序左右相等
	{
		in.push_back(pre[preLeft]);
		return;
	}
	if (pre[preLeft] == post[postRight])//根节点
	{
		int i = preLeft + 1;
		while (i <= preRight && pre[i]!=post[postRight-1])
		{
			i++;
		}
		if (i - preLeft > 1)
		{
			getIn(preLeft + 1, i - 1, postLeft, postLeft + (i - preLeft - 1) - 1);
		}
		else
			unique = false;

		in.push_back(post[postRight]);
		getIn(i, preRight, postLeft + (i - preLeft - 1), postRight - 1);
	}

}

int main()
{
	int n;
	cin >>n ;
	pre.resize(n);
	post.resize(n);
	for (int i = 0; i < n; i++)
		cin >> pre[i];
	for (int i = 0; i < n; i++)
		cin >> post[i];
	getIn(0,n-1,0,n-1);
	printf("%s\n%d", unique == true ? "Yes" : "No", in[0]);
	for (int i=1;i<in.size();i++)
	{
		cout << " "<<in[i];
	}
	cout << endl;
	return 0;
}
