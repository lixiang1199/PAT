#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int z[100];//统计字母
int s[100];//统计数字
int luan[100];//其他字符
int main1() {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		string p;


		cin >> p;

		int len = p.length();
		int z = 0;
		int s = 0;
		int r = 0;//其他
		if (len < 6)
		{
			cout << "Your password is tai duan le.";
		}
		else {
			for (int j = 0; j < len; j++)
			{


				if ((p[j] > 'a' && p[j] < 'z') || (p[j] > 'A' && p[j] < 'Z'))

				{
					z++;
				}
				else if (p[j] >= '0' && p[j] <= '9') {
					s++;
				}
				else if (p[j] == '.') {}

				else {
					r++;
				}

				if (z == 0) {
					cout << "Your password needs zi mu.";
					break;
				}

				else if (s == 0) {
					cout << "Your password needs shu zi.";
					break;
				}

				else if (r != 0) {
					cout << "Your password is tai luan le.";
					break;
				}

				else {
					cout << "Your password is wan mei.";
					break;
				}


			}//for
		}//else
		if (i < N - 1)cout << endl;
	}//for
	return 0;
}//main