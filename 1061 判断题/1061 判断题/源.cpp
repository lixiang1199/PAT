#include<iostream>
#include<iomanip>
using namespace std;

int main()

{
    int N = 0, M = 0;//人数 和 题数
    cin >> N >> M;
    int b;//题目分数

    int a[100];
    int r[100];//正确答案
    for (int i = 0; i < M; i++)//读取人数和题目数量
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
    //读取正确答案
    for (int i = 0; i < N; i++)
    {
        int c;
        int s = 0;//分数之和
        for (int i = 0; i < M; i++) {
            cin >> c;//读取答案
            if (c == r[i]) {
                s += a[i];
            }
        }
        cout << s << endl;
    }

    return 0;
}