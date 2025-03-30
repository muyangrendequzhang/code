#include <iostream>//langqiaooj 3150
#include<list>
using namespace std;
int main_plant_seed()
{
    list<int>lis;
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        lis.push_back(x);
    }
    lis.sort();
    lis.unique();
    cout << lis.size() * m;
    return 0;
}