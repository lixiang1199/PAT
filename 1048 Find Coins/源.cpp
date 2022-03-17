#include<iostream>
using namespace std;
int a[1001];//全部初始化为0
int main() {
	int N, M;
	cin >> N>>M;
	int temp;
	for (int i = 0; i < N; i++) {//几个数字
		cin >> temp;
		a[temp] += 1;//temp 代表值 a数组 存放出现的次数
		//all positive numbers no more than 500
	}//输入每个值并将其出现的次数保存起来

	for (int i = 0; i < 1001; i++) {
		if (a[i])//i存在时
		{
			a[i]--;//次数减一
			if (i < M && a[M - i])//i比M小并且M-i也存在
			{
				cout << i << " "<<M - i;
				return 0;
			}	             //（i+M-i=M）
			a[i]++;//次数返回
		}
		
	}

	cout << "No Solution";
	return 0;

	//将重复元素统计个数后放入一个数组中
}