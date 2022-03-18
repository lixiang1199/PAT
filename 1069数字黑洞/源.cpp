#include<iostream>
#include<algorithm>
using namespace std;

int N, a[4];
int main()
{
	cin >> N;
	do//±‹√‚ ‰»Îµƒ «6174
	{
		a[2] = N % 10;
		a[3] = N / 10 % 10;
		a[0] = N / 100 % 10;
		a[1] = N / 1000;
		int big, small;
		sort(a, a + 4);
		big = a[3] * 1000 + a[2] * 100 + a[1] * 10 + a[0];
		small = a[0] * 1000 + a[1] * 100 + a[2] * 10 + a[3];
		printf("%04d - %04d = %04d\n", big, small, big - small);
		N = big - small;

	} while (N && N != 6174);

	return 0;
}