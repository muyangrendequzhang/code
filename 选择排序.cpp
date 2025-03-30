#include<iostream>
using namespace std;
static void choose(int arr[], int len)//选择排序
{

    int m = len;
    int n = 0;
    for (int j = 0; j < len; j++)
    {
        int max = 0;
        for (int i = 0; i < m; i++)
        {
            if (arr[i] > max)
            {
                max = arr[i];
                n = i;
            }
        }
        m--;
        int temp = arr[n];
        arr[n] = arr[m];
        arr[m] = temp;
    }
}
static void print(int arr[], int len)
{

    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << '\t';
    }
}
int main_choose()
{
    int arr[10] = { 1,2,3,1,745,44,6,8,9,12 };//测试数组
    int len = sizeof(arr) / sizeof(arr[0]);
    choose(arr, len);
    print(arr, len);
    system("pause");
    return 0;
}
//选出最大值和现在的最后一个位置交换