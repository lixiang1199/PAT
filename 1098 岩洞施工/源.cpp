#include<iostream>
#include<vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	int top[101];
	int bot[101];
	/*bool flag;
	int height;*/
	int bmin = -1, bmax = 1001;
	for (int i = 0; i < n; i++)
		cin >> top[i];
	for (int i = 0; i < n; i++)
	{
		cin >> bot[i];
		/*height = top[i] - bot[i];*/
	}
	for (int i = 0; i < n; i++) {
		if (top[i] < bmax)bmax = top[i];
		if (bot[i] > bmin)bmin = bot[i];
	}
	if (bmax > bmin)cout << "Yes " << bmax - bmin;
	else cout << "No " << abs(bmin - bmax + 1);

	return 0;
}