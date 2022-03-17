#include<iostream>
#include<iomanip>
using namespace std;

double b, pe, pD, sD,ce,te,tD;
int main() {
	int N;//居民区住房总套数
	cin >> N;
	double e;//低电量阈值
	cin >> e;
	double D;//观察期阈值
	cin >> D;
	for (int i = 0; i < N; i++) {
		

		int k;
		cin >> k;
		ce = 0;//注意数据重置

		for (int j = 0; j < k; j++) {
			cin >> b;
			if (b < e) {
				
				ce++;
				
			}
			


		}
		
		if (ce > (double)k / 2 && sD > D)
		{
			tD++;
			continue;
		}
		if (ce > (double)k / 2) { 
		te++; }
		
	}

	pD = tD * 100 / N;
	pe = te * 100 / N;
	cout << setiosflags(ios::fixed) << setprecision(1) << pe;
	cout << "% ";
	cout << setiosflags(ios::fixed) << setprecision(1) << pD;
	cout << "%";





}