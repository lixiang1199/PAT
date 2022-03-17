#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;//n––

	string bestID;
	string worstID;

	int best = 10000;
	int worst = 0;

	for (int i = 0; i < n; i++)
	{
		string id;
		int x, y;

		cin >> id >> x >> y;

		int point = x * x + y * y;
		if (point <= best)
		{
			best = point;
			bestID = id;
		}

		if (point >= worst)
		{
			worst = point;
			worstID = id;
		}
		}

	cout << bestID << " " << worstID << endl;



	}



