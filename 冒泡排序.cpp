#include<iostream>
using namespace std;
static void maopao(int arr[], int len)//冒泡排序
{
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len - i -1; j++)
        {
            if (arr[j + 1] < arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
 
}
static void print(int arr[], int len)
{

    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << '\t';
    }
}
int main_mp()
{
    int arr[10] = { 1,2,3,1,745,44,6,8,9,12 };//测试数组
    int len = sizeof(arr) / sizeof(arr[0]);
    maopao(arr, len);
    print(arr, len);
    system("pause");
    return 0;
}
//冒泡排序就是把每一个小于前者的数往后移，实现的