#include<iostream>
#include<fstream>
using namespace std;

struct node {
	int grade;
	string name;
};
node stu[5];



int main() {
	
	ofstream out("C:\\Users\\xlj20\\Desktop\\��ͷout.txt");
	if (out.is_open())
	{	for(int i=0;i<100;i++)
			out << i<<"�ϱ����� ���к���"<<endl;
		out.close();
	}
	ifstream in("C:\\Users\\xlj20\\Desktop\\��ͷout.txt");
	


}