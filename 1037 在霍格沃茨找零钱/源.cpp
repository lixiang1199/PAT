#include<iostream>
#include<iomanip>
using namespace std;

int g,s,k;//应付的价钱P
int G, S, K;//实付的钱 A
int main() {
	cin >> g;
	getchar();//读取"."
	cin >> s;
	getchar();
	cin >> k;

	cin >> G;
	getchar();//读取"."
	cin >> S;
	getchar();
	cin >> K;

	int money;//应付的钱
	money = 17 * 29 * g + 29 * s+k;
	int Money;//实付的钱
	Money= 17 * 29 * G + 29 * S+K;

	int d;//找的钱
	d = Money - money;

	
	int n_g = d / 17 / 29;//最高位
	
	int n_s = (d - n_g*17*29) / 29.0;
	int n_k = d - n_g * 17 * 29 - n_s*29;

	n_s = abs(n_s);
	n_k = abs(n_k);//绝对值函数
	cout << n_g <<"." << n_s<<"." << n_k;


	



}