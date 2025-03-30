#include<iostream>
using namespace std;
static void merge(int arr[],int* temparr,int left,int mid,int right)
{
    //标记左半区，和右半区第一个未排序的元素,临时数组元素的下标
    int l_pos = left;
    int r_pos = mid + 1;
    int pos = left;
    while (l_pos <= mid && r_pos <= right)
    {
        if (arr[l_pos] < arr[r_pos])
        {
            temparr[pos++] = arr[l_pos++];
        }
        else
        {
            temparr[pos++] = arr[r_pos++];
        }
    }
    while (l_pos <= mid)
    {
        temparr[pos++] = arr[l_pos++];
    }
    while (r_pos <= right)
    {
        temparr[pos++] = arr[r_pos++];
    }
    while (left <= right)
    {
        arr[left] = temparr[left];
        left++;
    }
}
static void msort(int arr[],int *temparr,int left,int right)
{
    if (left < right)
    {
        int mid = (left + right) / 2;

        msort(arr, temparr, left, mid);

        msort(arr, temparr, mid+1,right);

        merge(arr, temparr, left, mid, right);
    }

}
static void merge_sort(int arr[], int len)//归并排序的入口
{
    int* p = new int[len];
    if (p)
    {
        msort(arr, p, 0, len - 1);
        delete p;
    }
    else
    {
        cout << "分配失败" << endl;
    }
   
}
static void print(int arr[], int len)
{

    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << '\t';
    }
}
int main_emerge()
{
    int arr[10] = { 1,2,3,1,745,44,6,8,9,12 };//测试数组
    int len = sizeof(arr) / sizeof(arr[0]);
    merge_sort(arr, len);
    print(arr, len);
    system("pause");
    return 0;
}
