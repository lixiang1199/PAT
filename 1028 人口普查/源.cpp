#include<iostream>
#include<iomanip>
using namespace std;

struct people {
	string name;
	int year;
	int mon;
	int day;


};

int main() {
	int N;
	cin >> N;

	people a[100];
	for (int i = 0; i < N; i++) {
		cin >> a->name >> a->year;
		getchar();
		cin >> a->mon;
		getchar();
		cin >> a->day;
	}

	int maxy = 3000;//最老
	int miny = 0;//最年轻
	people b;//老人
	people c;//年轻人
	int v=0;//有效数
	for (int j = 0; j < N; j++)
	{
		if (a[j].year <= maxy) {
			maxy = a[j].year;
			b=a[j];
		}
		if (a[j].year >= miny)
		{
			miny = a[j].year;
			c = a[j];
		}
		if (2014 - a[j].year <= 200 ||   a[j].year - 2014 <= 200) {
			v++;
		}
	}

	cout << v<<" "<<b.name<<" " << c.name;


}