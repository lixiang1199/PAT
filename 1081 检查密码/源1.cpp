#include<iostream>
#include<string>

using namespace std;

int main() {
	string pass;
	int n;
	cin >> n;
	getchar();
	while (n--)
	{
		getline(cin, pass);
		//getline ÅäºÏgetcharÊ¹ÓÃ
		
			
			
			
			
			
		int len = pass.length();
		if (len < 6)	cout << "Your password is tai duan le.";
		else {
			int zimu = 0, shuzi = 0, luan = 0;
			for (int i = 0; i < len; i++)
			{
				if (pass[i] >= '0' && pass[i] <= '9')	shuzi++;
				else if (pass[i] >= 'a' && pass[i] <= 'z') zimu++;
				else if (pass[i] >= 'A' && pass[i] <= 'Z') zimu++;
				else if(pass[i]=='.'){}
				else { luan++; }
			}
			if (luan != 0)  cout << "Your password is tai luan le.";
			else if (zimu == 0)	cout << "Your password needs zi mu.";
			else if (shuzi == 0)	cout << "Your password needs shu zi.";
			else	cout << "Your password is wan mei.";
		}
		if(n>0)cout << endl;
	}

}