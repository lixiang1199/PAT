#include<iostream>
#include<iomanip>

using namespace std;
struct stu {
	string name;
	int k[10];//个人的物品数
};
int main() {
	int N;//学生人数
	int M;//需要被查缴的物品种类数
	cin >> N >> M;
	int c[6];//收缴物品编号
	for (int i = 0; i < M; i++)
	{
		cin >> c[i];
	}
	stu p[1000];
	int y = 0;
	int chu[10];
	int yy = 0;
	int x = 0;
	int renshu = 0;
	int wuping = 0;
	for (int i = 0; i < N; i++) {
		cin >> p[i].name >> y;
		for (int j = 0; j < y; j++)
		{
			cin >> p[i].k[j];
		}//录入
		for (int k = 0; k < y; k++)
		{
			for (int t = 0; t < M; t++) {
				x = 0;
				while (p[i].k[k] == c[t])//逐一比较
				{
					
					chu[yy++] = c[t];
					x = 1;
					wuping++;

				}
		
				
			}renshu += x;
				if (x != 0) {
					cout << p[i].name << ": ";
					for (int h = 0; h < yy; h++)
					{
						cout << chu[h];
						if (h < yy - 1)
						{
							cout << " ";
						}
					}cout << endl;
				}
			}
		}

		cout << renshu << " " << wuping;
	}





}