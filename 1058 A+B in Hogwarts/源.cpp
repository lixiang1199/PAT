#include<iostream>
using namespace std;
int main() {
	long long Galleon, Sickle, Knut, sum = 0;
	cin >> Galleon;
	getchar();
	cin >> Sickle;
	getchar();
	cin >> Knut;
	sum += (17 * Galleon + Sickle) * 29 + Knut;
	cin >> Galleon;
	getchar();
	cin >> Sickle;
	getchar();
	cin >> Knut;
	sum += (17 * Galleon + Sickle) * 29 + Knut;//��������
	long long sg = sum / 17 / 29;
	long long ss = (sum - sg * 17 * 29) / 29;

	long long  sk = sum - sg * 17 * 29 - ss * 29;
	cout << sg << "." << ss << "." << sk;
}//��ȫ��int�ĳ�long long��ͨ������������⣩