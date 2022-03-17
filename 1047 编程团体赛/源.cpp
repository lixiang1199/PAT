
#include<iostream>
using namespace std;
int a[1001];
int index=0;
int ma=0;//用了max就会出现不明确
int main() {
	int N;//参赛队员总数
	int ID;//队伍编号
	int id;//队员编号
	int g;//成绩
	char ch;
	cin >> N;
	
	for (int i = 0; i < N; i++)
	{

		cin >> ID;
		ch=getchar();
		cin >> id >> g;
		a[ID] += g;//将分数加入到对应的班级区域中
		//实际上没有用到队员编号，并未储存队员
	}
	for(int i=0;i<1001;i++)
	{
	
		if (a[i] > ma) {
			ma = a[i];
			index = i;

		}
		//寻找最大值，并记录索引
	}
	cout << index << " " << ma;


	
}