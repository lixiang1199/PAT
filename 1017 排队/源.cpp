#include<iostream>
#include<algorithm>
using namespace std;

int Time;

class customer
{public:
	int come_time, process_time, leave_time = 0;
};
customer c[10001];

bool comp(customer x, customer y)
{
	return x.come_time < y.come_time;
}

int main()
{
	int i, j, N, K;
	cin >> N >> K;
	for (i = 0; i < N; i++)
	{
		int h, m, s, process_time;
		char d;
		cin >> h >> d >> m >> s >> process_time;
		c[i].come_time = h * 3600 + m * 60 + s;
		c[i].process_time = process_time * 60;
		if (c[i].process_time > 3600)
			c[i].process_time = 3600;
	}
	sort(c, c + N, comp);
	int next = 0;
	int windows[100];
	double sum = 0;
	for (i = 0; i < K; i++)
	{
		windows[i] = -1;// 空闲
	}
	for (Time = 8 * 3600; c[next].come_time <= 17 * 3600; Time++)
	{
		if (windows[i] >= 0)
		{
			j = windows[i];
			if (c[j].leave_time == Time)
				windows[i] = -1;

		}
	}
	//送客
	for (i = 0; i < K; i++)
	{
		if (windows[i] == -1)
		{
			if (c[next].come_time <= 17 * 3600 && c[next].come_time <= Time)
			{
				windows[i] = next;
				next++;
			}
		}
	}

	//入队
	for (i = 0; i < K; i++)
	{
		if (windows[i] >= 0)
		{
			j = windows[i];
			if (c[j].leave_time == 0)
			{
				sum += Time - c[j].come_time;
				c[j].leave_time = Time + c[j].process_time;
			}
		}

		//迎客
		printf(" %.1f", sum / next / 60);

	}
}