#include<iostream>
#include<iomanip>
using namespace std;

double b, pe, pD, sD,ce,te,tD;
int main() {
	int N;//������ס��������
	cin >> N;
	double e;//�͵�����ֵ
	cin >> e;
	double D;//�۲�����ֵ
	cin >> D;
	for (int i = 0; i < N; i++) {
		

		int k;
		cin >> k;
		ce = 0;//ע����������

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