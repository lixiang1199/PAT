#include<iostream>
#include<stack>
#include<vector>
#include<cstring>
using namespace std;
vector<int> pre, in, post, value;

void postorder(int root, int start, int end)
{
    if (start > end)
    {
        return;
    }
    int i = start;
    while (i < end && in[i] != pre[root])
    {//当遍历没有结束时 并且 没有到达前序遍历的根
        i++;//不断后移  
    }//直到根节点为止
    //寻找根节点在中序遍历中的下标
    postorder(root + 1, start, i - 1);//左孩子
    //后序遍历递归

    postorder(root + 1 + i - start, i + 1, end);//右孩子
    //i-start 左子树所走过的路程 加上后到达子树

    post.push_back(pre[root]);
    //根 左右。   左右 根
}



int main()
{
    int n;
    cin >> n;
    char str[5];
    stack<int> s;
    int key = 0;
    while (~scanf_s("%s", str))
    {
        if (strlen(str) == 4)
        {
            int num;
            cin >> num;
            value.push_back(num);//将输入的num添加进value中
            pre.push_back(key);//依次给pre从0往上赋值，每push一次就加一
            s.push(key++);
        }
        else
        {
            in.push_back(s.top());//push就给中序遍历赋值
            s.pop();//赋值从大到小
        }
    }
    postorder(0, 0, n - 1);//root start end
    cout << value[post[0]];
    for (int i = 1; i < n; i++)
        cout << " " << value[post[i]];

}