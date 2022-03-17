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
    {//������û�н���ʱ ���� û�е���ǰ������ĸ�
        i++;//���Ϻ���  
    }//ֱ�����ڵ�Ϊֹ
    //Ѱ�Ҹ��ڵ�����������е��±�
    postorder(root + 1, start, i - 1);//����
    //��������ݹ�

    postorder(root + 1 + i - start, i + 1, end);//�Һ���
    //i-start ���������߹���·�� ���Ϻ󵽴�����

    post.push_back(pre[root]);
    //�� ���ҡ�   ���� ��
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
            value.push_back(num);//�������num��ӽ�value��
            pre.push_back(key);//���θ�pre��0���ϸ�ֵ��ÿpushһ�ξͼ�һ
            s.push(key++);
        }
        else
        {
            in.push_back(s.top());//push�͸����������ֵ
            s.pop();//��ֵ�Ӵ�С
        }
    }
    postorder(0, 0, n - 1);//root start end
    cout << value[post[0]];
    for (int i = 1; i < n; i++)
        cout << " " << value[post[i]];

}