#include<iostream>
using namespace std;

int N;
int data[1001];//堆的下标从1开始

int main()
{

	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> data[N];
	traverse(1);



	return 0;
}