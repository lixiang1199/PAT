#include<iostream>
using namespace std;
struct stu {
	string name;
	char gender;
	string id;
	int grade;
};

int main() {
	int N;
	cin >> N;
	stu a[200];
	stu b[200];
	stu g[200];//共用结构体

	int m = 0, f = 0;
	for (int i = 0; i < N; i++)
	{
		cin >> a[i].name >> a[i].gender >> a[i].id >> a[i].grade;
		if (a[i].gender == 'M') {

			b[m++] = a[i];
		}
		else {

			g[f++] = a[i];//判断并计入结构体中
		}


	}
	int gmax = -1, gtemp = -1;
	for (int i = 0; i < f; i++) {
		if (g[i].grade > gmax) {
			gmax = g[i].grade;
			gtemp = i;
		}
	}
	if (gmax>0) {
		cout << g[gtemp].name << " " << g[gtemp].id << endl;
	}
	else
		cout << "Absent" << endl;

	int bmin = 101, btemp = -1;
	for (int i = 0; i < m; i++) {
		if (b[i].grade < bmin) {
			bmin = b[i].grade;
			btemp = i;
		}
	}
	if (bmin < 100) {
		cout << b[btemp].name << " " << b[btemp].id << endl;
	}

	else
		cout << "Absent" << endl;
	if (gmax >= 0 && bmin <= 100)//注意等于也可以
		cout << gmax - bmin;
	else
		cout << "NA";

}