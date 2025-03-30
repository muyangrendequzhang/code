#include<iostream>
#include<cstring>
using namespace std;


int main_xiaoqiao()
{
    int num;
    cin >> num;
    while (num--)
    {
        int n, m;
        cin >> n >> m;
        string a;
        string b;
        cin >> a >> b;
        int t1=0, t2;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                t1 = i;

                break;
            }
        }
        bool mark1 = true;

        for (int i = t1; i < n; i++)
        {
            if (a[i] == b[i]) {
                t2 = i - 1;
                mark1 = false;
                break;
            }

        }
        if (mark1)
        {
            t2 = n - 1;
        }
        for (int i = 0; i < m; i++)
        {
            char temp = b[t2];
            for (int j = t1; j < t2; j++)
            {
                b[i + 1] = b[i];
            }
            b[t1] = temp;
        }
        bool mark = false;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                cout << "NO" << endl;
                mark = true;
                break;
            }
        }
        if (!mark)
        {
            cout << "YES" << endl;
        }
    }


    return 0;
}