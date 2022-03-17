#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
struct node {
    int add, key, next; //int flag;
};
int exist[10001] = { 0 };
int main()
{
    node list[100001],temp[100000];
    int s, n;
    cin >> s >> n;
    int a, b, c;
   
    int t1 = 1;

    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c;
        list[a] = { a,b,c };
    }
    //bool f=1;

    for (int i = s; i != -1; i = list[i].next)
    {  //if(!f){f=1;continue ;}
        //if(list[i].key<=list[list[i].next].key)break;
        exist[abs(list[i].key)] = 1;
        if (exist[abs(list[list[i].next].key)])//&& list[list[i].next].next!=-1){
        {
            temp[t1++] = list[list[i].next];
            list[i].next = list[list[i].next].next;
        }
        cout << setw(5) << setfill('0') << list[i].add << " " << list[i].key
            << " " << list[i].next << endl;
        //list[i].flag = 3;

        //f=0;//该到前面，同时更改next的值

    }
    for (int i = 1; i < t1 - 1; i++)
    {

        cout << setw(5) << setfill('0') << temp[i].add << " " << temp[i].key << " " << temp[i + 1].add << endl;

    }
    cout << setw(5) << setfill('0') << temp[t1 - 1].add << " " << temp[t1 - 1].key << " " << -1 << endl;



    return 0;
}