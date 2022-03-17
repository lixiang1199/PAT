#include<iostream>
#include<iomanip>

using namespace std;
int sum[100];//储存权值计算之和
int b[17] = { 7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2 };
int z[100];//取模后得到的值
char m[11] = { 1,0,'X',9,8,7,6,5,4,3,2 };
bool flag[100];
int s;
int main() {
	char a[100][17];//储存身份证号

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		{for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
		}
	}//录入身份证号码

	for (int j = 0; j < n; j++)
	{
		for (int k = 0; k < n; k++) {
			sum[j] += b[j] * a[j][k];
		}//计算各权值之和
	}

	for (int i = 0; i < n; i++)
	{
		z[i] = sum[i] % 11;

		//计算并储存取模后的值
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {

			if ((a[i][17] == m[z[i]] )&& (a[i][j] >= 0) && (a[i][j] <= 9)) {
				flag[i] = 1;
			}

			else flag[i] = 0;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (flag[i] == 0)
			{
				cout << a[i][j];

				//<<m[z[i]];
			}


			s = s + flag[i];



		}
		cout << endl;
	}
	if (s == 17) {
		cout << "All passed";
	}

}