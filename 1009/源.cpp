#include<iostream>
#include<map>
using namespace std;

int main()
{
	int K1,K2, a1[11],a2[11];
	double d1[20],d2[20];
	double D[2001]={0};
	cin >> K1;
	for (int i = 0; i < K1; i++)
		cin >> a1[i] >> d1[i];
	
	cin >> K2;
	for (int i = 0; i < K2; i++)
		cin >> a2[i] >> d2[i];

	for (int i = 0; i < K1; i++)
		for (int j = 0; j < K2; j++)
			D[a1[i] + a2[j]] += d1[i] * d2[j];


	int nonzero = 0;
	for (int i = 0; i <= 2000; i++)
		if (D[i])
			nonzero++;

	cout << nonzero;
	for (int i = 2000; i >= 0; i--)
		if (D[i])
			printf(" %d %.1f", i, D[i]);
}
