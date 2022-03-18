//stack  7   
//result  1 2 3 4 5 6 7
// 

#include<iostream>
#include<stack>
using namespace std;
int main()
{
	int M;//栈长
	int N;//序列长
	int K;//次数
	int i, j, k;
	cin >> M >> N >> K;
	while (K--)
	{
		stack<int>S;//每次初始化 避免未清0造成的影响
		int a[1000];
		for (i = 0; i < N; i++)
			cin >> a[i];//要判断的序列
		j = 0;//push过的次数
		for (i = 0; i < N; i++)
		{//判断a[i]能否被拿出来
			if (a[i] > j)
			{
				while (S.size() < M && a[i] > j)
				{
					S.push(j + 1);//从1开始入栈直至到达目前的元素
					j++;//从1开始递增，直到与a[i]匹配
				}//只要j与a[i]相等 或是已经到达S的最大长度（栈满），就退出while循环
			}
			if (a[i] > j)//之前已经不断低增，要是j仍然没有a[i]大，说明栈不够长
			{
				break;
			}
			else if (S.top() != a[i])//已在栈内，但不在栈顶
			{//当前元素不是现有栈的栈顶
			 //7 放不到 长度为5的栈中
			//此时的栈顶为S.top()==5,而a[i]==7;
				break;
			}
			else S.pop();//没有以上问题，pop顶端元素
		}

		if (i == N)//N次循环都执行完毕
		{
			cout << "YES" << endl;
		}
		else
			cout << "NO" << endl;

	}
	return 0;
}