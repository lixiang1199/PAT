#include<iostream>
#include<algorithm>
#include<queue>
#include<vector>
using namespace std;


class player 
{
public:
	int come_time, play_time,serve_time,leave_time;
	bool isvip;
};

class  table 
{
public:
	bool isvip=0;
	int cnt = 0;
	int serve = -1;// -1闲置 
};

bool comp(player x, player y)
{
	return x.come_time < y.come_time;
}

void printtime(int time)
{
	printf("%02d:%02d:%02d ", time / 3600, time % 3600 / 60, time % 60);

}

int main()
{
	player p[10000];
	int N;//人数
	int K;//桌子数
	int M;//会员桌子
	int i, j, k;

	table t[101];
	vector<int>v;
	cin >> N;
	for (i = 0; i < N; i++)
	{
		char c;
		int h, m, s;
		cin >> h >>c>> m >>c>> s>>p[i].play_time;
		p[i].come_time = h * 3600 + m * 60 + s;
		p[i].play_time *= 60;
			if (p[i].play_time > 7200)
				p[i].play_time = 7200;
	}//人的信息

	cin >> K >> M;
	while (M--)
	{
		cin >> i;
		t[i].isvip = 1;
	}//桌子信息

	sort(p, p + N, comp);

	int cursor = 0;

	queue<int>q1, q2;//普通队列，q2会员

	for (int time = 8 * 3600; time < 21 * 3600; time++)
	{
		for (i = 1; i <= K; i++)
		{
			if (t[i].serve != -1)
			{
				j = t[i].serve;
				if (p[j].leave_time == time)
				{
					t[i].serve = -1;
				}
			}//送客

			while (cursor < N && p[cursor].come_time)
			{
				q1.push(cursor);
				if (p[cursor].isvip)
					q2.push(cursor);
				cursor++;
			}//入队


			//迎客
			while (q2.size() && p[q2.front()].serve_time!=0)
			{
				q2.pop();
			}

			for (i = 1; i <= K; i++)
			{
				if (!t[i].isvip)
					continue;
				if (t[i].serve<0)
				{
					if (q2.size())
					{
						j = q2.front();
						v.push_back(j);
						t[i].serve = j;
						t[i].cnt++;
						p[j].serve_time = time;
						p[j].leave_time = time + p[j].play_time;
						
						while(q2.size() && p[q2.front()].serve_time != 0)
							q2.pop();
					}
				}
			}


			//非会员
			while (q1.size() && p[q1.front()].serve_time != 0)
			{
				q1.pop();
			}

			for (i = 1; i <= K; i++)
			{
				if (t[i].serve < 0)
				{
					if (q1.size())
					{
						j = q1.front();
						v.push_back(j);
						t[i].serve = j;
						t[i].cnt++;
						p[j].serve_time = time;
						p[j].leave_time = time + p[j].play_time;

						while (q1.size() && p[q1.front()].serve_time != 0)
							q1.pop();
					}
				}
			}
		}
	}
	for (int each : v)
	{
		printtime(p[each].come_time);
		printtime(p[each].serve_time);
		cout <<(p[each].serve_time - p[each].come_time+30)/60;
	}
	for (i = 1; i <= K; i++)
	{
		cout << t[i].cnt;
		if (i < K)
			cout <<" ";
	}


	return 0;
}