#include<iostream>
#include<iomanip>

using namespace std;
struct stu {
	string name;
	int k[10];//���˵���Ʒ��
};
int main() {
	int N;//ѧ������
	int M;//��Ҫ����ɵ���Ʒ������
	cin >> N >> M;
	int c[6];//�ս���Ʒ���
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
		}//¼��
		for (int k = 0; k < y; k++)
		{
			for (int t = 0; t < M; t++) {
				x = 0;
				while (p[i].k[k] == c[t])//��һ�Ƚ�
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