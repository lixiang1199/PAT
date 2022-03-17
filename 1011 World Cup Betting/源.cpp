#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	float a[3][3];
	char c[4] = "WTL";//最后一个0
	float max = 0;
	int max_i = 0, max_j1 = 0, max_j2, max_j3;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++) {
			cin >> a[i][j];
			if (max < a[i][j]) {
				max = a[i][j];
				max_i = i;
				max_j1 = j;
			}
		}
	}
	float max1 = a[max_i][max_j1];

	max = 0, max_i = 0, max_j2 = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++) {

			if (max < a[i][j] && a[i][j] < max1) {
				max = a[i][j];
				max_i = i;
				max_j2 = j;
			}
		}
	}
	float max2 = a[max_i][max_j2];

	max = 0, max_i = 0, max_j3 = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++) {

			if (max < a[i][j] && a[i][j] < max2) {
				max = a[i][j];
				max_i = i;
				max_j3 = j;
			}
		}
	}
	float max3 = a[max_i][max_j3];
	
	

	float r = (max1 * max2 * max3 * 0.65 - 1) * 2;
	cout << setiosflags(ios::fixed) << setprecision(2)<<r;

}