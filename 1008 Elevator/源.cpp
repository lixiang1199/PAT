#include<iostream>
using namespace std;
int main() {
	int N;
	cin >> N;
	int a[100];
	for (int i = 0; i < N; i++) {

		cin >> a[i];

	}
	//It costs 6 seconds to move the elevator up one floor
	int now = 0,time=0;
	for (int i = 0; i < N; i++) {
		if (a[i] > now) {
			time += 6 * (a[i] - now);
			now = a[i];
		}
		else if(a[i]==now){}
		else {// 4 seconds to move down one floor
			time += 4 * (now - a[i]);
			now = a[i];
		}
		//The elevator will stay for 5 seconds at each stop.
		time += 5;
	}

	cout << time;

	return 0;

}