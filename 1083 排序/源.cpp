#include<iostream>
#include<algorithm>
using namespace std;

struct student
{
	string name, ID;
	int grade;
};
int N;
student s[200];

bool comp(student x, student y)
{
	return x.grade > y.grade;
}
int main()
{
	int i, j, k;
	cin >> N;
	for (i = 0; i < N; i++)
	{
		cin >> s[i].name >> s[i].ID >> s[i].grade;
	}
	int g1, g2;
	cin >> g1 >> g2;
	sort(s, s + N, comp);
	int count = 0;
	for (i = 0; i < N; i++)
	{
		if (s[i].grade >= g1 && s[i].grade <= g2) {
			cout << s[i].name << " " << s[i].ID << endl;
			count++;
		}
	}
	if (!count) {
		cout << "NONE";
	}
	return 0;
}