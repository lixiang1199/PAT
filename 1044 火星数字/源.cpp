#include<iostream>
using namespace std;
int c;
double sum;
#include <math.h>
int mte(char* p) {
	c++;
	p++;
	sum += (int(*p) - '0');
	while (p++) {
		c++;
		

		for (int i = 1; i < c; i++) {
			
		sum += (int(*p) - '0')*pow(10,i);
			
		}
	}

	
}
int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		char a[20];
		cin >> a;
		if (a[0] >= '0' && a[0] <= '9')
		{
			double r=mte(a);
			cout << r;
		}
		else{}
		

	}

	return 0;
}