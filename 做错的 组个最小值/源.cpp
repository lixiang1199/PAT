#include<iostream>
#include<iomanip>

using namespace std;
int a[10];
void bubble(int a[], int n)
{
	int temp;
	for (int i = 1; i < n; i++) {
		for (int j = 1; j < n; j++) {
			if (a[j] < a[j - 1])
			{
				temp = a[j - 1];
				a[j - 1] = a[j];
				a[j] = temp;

			}
		}


	}


}

void print(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i];

	}


}
int main() {
	int s = 0;
	int new_min = 9;
	int jilu = 0;
	for (int i = 0; i < 10; i++) {
		cin >> a[i];
	}
	int max = a[0], min = a[0];
	for (int i = 0; i < 9; i++) {

		if (a[i + 1] > max)
		{
			max = a[i + 1];

		}
	}
	for (int i = 0; i < 9; i++) {

		if (a[i + 1] < min)
		{
			min = a[i + 1];

		}
	}


	bubble(a, 10);
	if (min != 0)
	{
		print(a, 10);

	}


	else {
		for (int i = 0; i < 10; i++)
		{
			if (a[i] == 0)
				s += 1;
		}

		if (s == 1) {
			int temp;
			temp = a[1];
			a[1] = a[0];
			a[0] = temp;
			print(a, 10);
		}

		else {
			if (a[0] != 0)
			{
				new_min = a[0];
			}

			else {
				for (int i = 0; i < 9; i++) {

					if (a[i + 1] < new_min && a[i + 1] != 0)
					{
						new_min = a[i + 1];
						jilu = i + 1;
					}
				}

				int temp = a[jilu];
				a[jilu] = a[0];
				a[0] = temp;




			}

			print(a, 10);

		}
	}
	return 0;

}

