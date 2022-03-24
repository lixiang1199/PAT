#include<iostream>
#include<unordered_map>
#include<set>
#include<string>
using namespace std;

//建立哈希表

unordered_map<string, set<string>>Map[6];



int main()
{
	int N;
	cin >> N;
	getchar();//清除换行符
	while (N--)
	{
		string ID, title, author, key, publisher, year;
		getline(cin, ID);
		getline(cin, title);
		Map[1][title].insert(ID);
		getline(cin, author);
		Map[2][author].insert(ID);
		do
		{
			cin >> key;
			Map[3][key].insert(ID);
		} while (getchar() == ' ');
		getline(cin, publisher);
		Map[4][publisher].insert(ID);
		getline(cin, year);
		Map[5][year].insert(ID);

	}
	int M;
	cin >> M;
	while (M--)
	{
		int i;
		string word;
		cin >> i;
		getchar();
		getline(cin, word);
		cout << i << ": " << word << endl;
		if (Map[i][word].size())
		{
			for (string each : Map[i][word])
			{
				cout << each << endl;
			}
		}
		else
		{
			cout << "Not Found\n";
		}
	}

}