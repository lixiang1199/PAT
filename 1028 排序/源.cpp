#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

struct student {
	string ID;
	string name;
	int grade;
};

student s[100000];

bool comp1(student& x, student& y) //����id��������
{
	return x.ID < y.ID;
}

bool comp2(student& x, student& y) //����id��������
{
	if (x.name != y.name)return x.name < y.name;
	//�Ȱ���������
	else return x.ID < y.ID;
	//�����޷�����ʱ�ٰ�ID����
}
bool comp3(student& x, student& y) {
	if (x.grade != y.grade)return x.grade < y.grade;
	else return x.ID < y.ID;
}


int main()
{
	int N, C, i;
	cin >> N >> C;
	for (i = 0; i < N; i++)
	{
		cin >> s[i].ID >> s[i].name >> s[i].grade;
	}
	if (C == 1)
	{//comparator. �Ƚ���.
		sort(s, s + N, comp1);
	}
	else if (C == 2)
	{
		sort(s, s + N, comp2);
	}
	else sort(s, s + N, comp3);

	for (i = 0; i < N; i++)
		cout << s[i].ID << " " << s[i].name << " " << s[i].grade << endl;
	return 0;
}
