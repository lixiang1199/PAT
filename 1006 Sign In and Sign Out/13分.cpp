#include<iostream>
using namespace std;
//只比较了小时
struct stu {
	string id;
	int in_h;
	int in_m;
	int in_s;
	int out_h,out_m,out_s;

};



int main() {
	int N;
	cin >> N;
	stu a[15];
	for (int i = 0; i < N; i++) {
		cin >> a[i].id>>a[i].in_h;
		getchar();
		cin >> a[i].in_m;
		getchar();
		cin >> a[i].in_s;
		cin >> a[i].out_h;
		getchar();
		cin >> a[i].out_m;
		getchar();
		cin >> a[i].out_s;
		}
		int min_h =25,t,t1, max_h=-1;
	
		for (int i = 0; i < N; i++) {
			if (a[i].in_h < min_h) {
				min_h = a[i].in_h;
				t = i;

			}
		}
		for (int i = 0; i < N; i++) {
			if (a[i].in_h > max_h) {
				max_h = a[i].in_h;
				t1 = i;

			}
		}
		cout << a[t].id << " "<<a[t1].id;



}