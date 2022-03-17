#include<iostream>
#include<iomanip>
#include<cstring>
#include<string>
using namespace std;

struct Student {
	string name;
	string num;
	int grade;

};
int main() {
	int n;
	cin >> n;

	Student person[150];//×ã¹»´ó·ÀÖ¹Òç³ö
	for (int i = 0; i < n; i++) {
		cin >> person[i].name >> person[i].num >> person[i].grade;
	}
	Student temp;
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < n - i; j++) {
			if (person[j].grade > person[j + 1].grade) {
				temp = person[j];
				person[j] = person[j + 1];
				person[j + 1] = temp;

			}
		}


	}
	if (n > 1) {
		cout << person[n - 1].name << ' ' << person[n - 1].num << endl;
		cout << person[0].name << ' ' << person[0].num;
	}

	else { cout << person[0].name << ' ' << person[0].num << endl << person[0].name << ' ' << person[0].num; }


	return 0;




}