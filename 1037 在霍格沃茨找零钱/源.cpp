#include<iostream>
#include<iomanip>
using namespace std;

int g,s,k;//Ӧ���ļ�ǮP
int G, S, K;//ʵ����Ǯ A
int main() {
	cin >> g;
	getchar();//��ȡ"."
	cin >> s;
	getchar();
	cin >> k;

	cin >> G;
	getchar();//��ȡ"."
	cin >> S;
	getchar();
	cin >> K;

	int money;//Ӧ����Ǯ
	money = 17 * 29 * g + 29 * s+k;
	int Money;//ʵ����Ǯ
	Money= 17 * 29 * G + 29 * S+K;

	int d;//�ҵ�Ǯ
	d = Money - money;

	
	int n_g = d / 17 / 29;//���λ
	
	int n_s = (d - n_g*17*29) / 29.0;
	int n_k = d - n_g * 17 * 29 - n_s*29;

	n_s = abs(n_s);
	n_k = abs(n_k);//����ֵ����
	cout << n_g <<"." << n_s<<"." << n_k;


	



}