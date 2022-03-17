#include<iostream>
#include<string>
using namespace std;

int main() {
	string N;
	cin >> N;
	int sum = 0;
	int i;
	int a[100];
	string p[10] = { "zero","one","two","three","four","five","six","seven","eight","nine" };
	for (i = 0; i < N.length(); i++)
		sum += N[i]-'0';//不减0就会出大问题
	int count = 0;
	while (sum)
	{
		a[count++] = sum % 10;
		sum /= 10;

	}
	for(i=count-1;i>0;i--){
		cout << p[a[i]] << " ";
	}
	cout << p[a[0]];
	return 0;




}