#include<iostream>
#include<string>
using namespace std;
struct paper {
	string id;
	int price, count;
};
int main() {
	int n;
	cin >> n;
	paper p1[10000];
	int maxn = -1,maxm=-1,champion,champion_p;
	for (int i = 0; i < n; i++) {
		cin >> p1[i].id >> p1[i].price >> p1[i].count;
		if (p1[i].count > maxn) {
			champion = i; 
			maxn=p1[i].count;
		}
		if (p1[i].count * p1[i].price > maxm) {
			champion_p = i;
			maxm = p1[i].count * p1[i].price;
		}
	}
	cout << p1[champion].id << " " << maxn << endl;
	cout << p1[champion_p].id << " " << maxm;

	return 0;
}