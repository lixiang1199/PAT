#include<iostream>
#include<iomanip>
using namespace std;

int main()

{
    int N = 0, M = 0;//���� �� ����
    cin >> N >> M;
    int b;//��Ŀ����

    int a[100];
    int r[100];//��ȷ��
    for (int i = 0; i < M; i++)//��ȡ��������Ŀ����
    {
        cin >> b;
        a[i] = b;
    }
    for (int i = 0; i < M; i++)
    {
        int d;
        cin >> d;

        r[i] = d;
    }
    //��ȡ��ȷ��
    for (int i = 0; i < N; i++)
    {
        int c;
        int s = 0;//����֮��
        for (int i = 0; i < M; i++) {
            cin >> c;//��ȡ��
            if (c == r[i]) {
                s += a[i];
            }
        }
        cout << s << endl;
    }

    return 0;
}