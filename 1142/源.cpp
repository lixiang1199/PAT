#include<iostream>
using namespace std;

int Nv, Ne;
int matrix[201][201];

int main()
{
	cin >> Nv >> Ne;
	while (Ne--)
	{
		int i, j;
		cin >> i >> j;
		matrix[i][j] = matrix[j][i] = 1;
	}
	int K;
	cin >> K;
	while (K--)
	{
		
	}
}