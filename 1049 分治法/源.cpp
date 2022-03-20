#include<iostream>
using namespace std;
//4321
//0-999 n
//1000-1999 1000+n
//2000-2999 n
//3000-3999 n
//0-9999 n*10+1000

//1300
//0-999
//1000
//1001-1300
int a[] = { 1,10,100,1000,10000,100000,1000000,10000000,100000000,1000000000 };
int b[] = { 0,1, 20, 300, 4000, 50000, 600000, 7000000, 80000000,900000000 };

int countone(int n)
{
	if (!n)return 0;//³ö¿Ú
	int i, j;
	for (i = 0; n / a[i] > 9; i++);
	j = n / a[i];
	if (j == 1)
	{
		return b[i] + 1 + countone(n - a[i]) + n - a[i];
	}
	else
	{
		return b[i] * j + a[i] + countone(n - j * a[i]);
	}
}


int main()
{
	int N;
	cin >> N;
	cout << countone(N);
	return 0;
}