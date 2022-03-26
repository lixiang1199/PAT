//#include<iostream>
#include<fstream>

using namespace std;

fstream cin("in.txt");
fstream cout("out.txt");

int main()
{
	int K;
	cin >> K;
	int a[10000];
	int left=0, right=K-1,sum=-1,temp=0,tindex=0;
	for (int i = 0; i < K; i++)
	{
		cin >> a[i];
		temp += a[i];
		if (temp < 0)//负数会拖累后面的总和，还不如舍弃 从0开始记录
		{
			temp = 0;
			tindex= i+1;
		}
		else if (temp > sum)
		{
			sum = temp;
			left = tindex;
			right = i;
		}
	}
	if (sum < 0)
		sum = 0;
	cout << sum << " " << a[left] << " " << a[right];
	return 0;
}