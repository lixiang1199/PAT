#include<iostream>
#include<iomanip>
using namespace std;

struct stu {
	int sj;
	int ks;
	string code;
};

int main() {
	int n;
	cin >> n;
	stu a[1000];

	for (int i = 0; i < n; i++)
	{
		cin >> a[i].code >> a[i].sj >> a[i].ks;

	}

	int m;
	int co[1000];
	cin >> m;
	for (int j = 0; j < m; j++)
	{
		cin >> co[j];

	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (co[i] == a[j].sj) {
				cout << a[j].code << " " << a[j].ks;
				if (m-- > 1) { cout << endl; }

			}
		}
	}











	return 0;
}