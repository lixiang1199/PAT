#include<iostream>
using namespace std;

void quicksort(int left, int right);

int cnt = 0;
struct stu {
	string name;
	string id;
	int grade;
};
stu a[100];
stu b[100];
int main() 
{
	int N;
	cin >> N;
	

	int min, max;
	for (int i = 0; i < N; i++)
	{
		cin >> a[i].name >> a[i].id >> a[i].grade;
	}
	cin >> min >> max;
	
	for (int i = N; i > 0; i--)
	{
		if (a[i].grade >= min && a[i].grade <= max)
		{
			b[cnt++] = a[i];
		}
	}
	
	if (cnt == 0) {
		cout << "NONE";
		return 0;
	}

	//for (int k = 0; k < N + 500; k++)
	//{
	//	for (int i = 0; i < count; i++)
	//	{
	//		if (b[i + 1].grade > b[i].grade)
	//		{//后一个大就交换到前面
	//			temp = b[i];
	//			b[i] = b[i + 1];
	//			b[i + 1] = temp;
	//		}
	//	}
	//}stu temp;

	quicksort(0,cnt-1 );

	for (int i = 0; i < cnt; i++)
	{
		cout << b[i].name << " " << b[i].id << endl;
	}
	return 0;
}
void quicksort(int left, int right)
{
	int i, j; int p; 
	stu p1 = b[left];
	i = left; j = right;
	p = b[i].grade;
	while (b[j].grade >= p && i < j)
	{
		j--;
	}
	while (b[i].grade <= p && i < j)
	{
		i++;
	}
	if (i < j) 
	{
		stu temp;
		temp = b[i];
		b[i] = b[j];
		b[j] = temp;
	}
	b[left] = b[i];
	b[i] = p1;


	quicksort(left, i-1);
	quicksort(i+1, right);

	return;
}