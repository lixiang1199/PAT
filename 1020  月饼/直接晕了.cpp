#include<iostream>
using namespace std;
struct yb {
	int b;//售价
	int a;//库存
};
int main() {
	int N;//种类数
	cin >> N;
	yb d[1000];
	float p=0,k=0;
	int D;//需求量
	cin >> D;
	int e=0;
	for (int i = 0; i < N; i++) {
		cin >> d[i].a;
		k += d[i].a;//库存量
		cin >> d[i].b;//每种售价
	}
	int max = -1,t,max1=100000;
	while (D) {
		for (int i = 0; i < N; i++) {
			
			if (d[i].b > max&&d[i].b<max1) {
				max = d[i].b;
				t = i;
			}
			max1 = max;
		}
		if (D > max * d[t].a) {
			if (max > d[t].a) {
				D -= max * d[t].a;
				e += max * d[t].b
					;
			}
			else {
				float ti = d[t].b;
			}
		}
		else {
			float te=k / d[t].a;
			D = 0;
			e += te * d[t].b;
		}

	}
	cout << e;

}