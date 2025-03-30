#include<iostream>
using namespace std;
// ϣ������
void xier(int arr[], int len)
{
    for (int i = len / 2; i > 0; i /= 2)
    {
        for (int j = i;j<len;j++)
        {
            int temp = arr[j];
            int k = j;
            while (k > i && temp < arr[k - i])
            {
                arr[k] = arr[k - i];
                k -= i;
            }
            arr[k] = temp;
        }
    }
}

// ��ӡ����
void print(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << '\t';
    }
    cout << endl;
}

int main()
{
    int arr[10] = { 1, 2, 3, 1, 745, 44, 6, 8, 9, 12 };  // ��������
    int len = sizeof(arr) / sizeof(arr[0]);

    cout << "����ǰ: ";
    print(arr, len);

    // ����ϣ������
    xier(arr, len);

    cout << "�����: ";
    print(arr, len);

    return 0;
}
