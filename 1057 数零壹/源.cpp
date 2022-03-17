#include<iostream>
using namespace std;
int main() {
	char temp;
	int sum = 0, c0 = 0, c1 = 0;
	while ((temp = getchar()) != '\n') {//逐个读取字符，不再需要使用cin
		if (temp >= 'a' && temp <= 'z') {
			sum += temp - 'a' + 1;//小写的情况
		}
		else if (temp >= 'A' && temp <= 'Z') {
			sum += temp - 'A' + 1;//大写的情况
		}
	}
	while (sum) {
		switch (sum % 2) {
		case 1:
			c1++;
			break;
		case 0:
			c0++;

		}
		sum /= 2;

	

	}
	cout << c0 << " " << c1;
}
	