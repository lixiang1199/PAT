#include<iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	string id, id_min, id_max;
	int h, m, s, all, t_min = 1000000, t_max = -1;

	for (int i = 0; i < N; i++) {

		cin >> id;
		getchar();
		cin >> h;
		getchar();
		cin >> m;
		getchar();
		cin >> s;
		all = 3600 * h + 60 * m + s;
		if (all < t_min) {
			t_min = all;
			id_min = id;
		}
		cin >> h;
		getchar();
		cin >> m;
		getchar();
		cin >> s;
		all = 3600 * h + 60 * m + s;
		if (all > t_max) {
			t_max = all;
			id_max = id;
		}
	}
	cout << id_min << " " << id_max;

}