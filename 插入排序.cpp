#include<iostream>
using namespace std;
void charu(int arr[],int len)
{
	for (int i = 1; i < len; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (arr[i] < arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
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
int main_charu()
{
	int arr[10] = { 1,2,3,1,745,44,6,8,9,12 };//��������
	int len = sizeof(arr) / sizeof(arr[0]);
	charu(arr, len);
	print(arr, len);
	system("pause");
	return 0;
}
//Ĭ�ϵ�һ���Ѿ��ĺã�Ȼ��ȥ������������Ƹ��ڵ�λ��