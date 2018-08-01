#include<iostream>
using namespace std;

int a[100];

void QuickSort(int a[],int l,int r)
{
	if (l < r)
	{
		int i = l, j = r, x = a[l];
		while (i < j)
		{
			while (i<j&&a[j]>x)
				j--;
			if (i < j)
				a[i++] = a[j];
			while (i < j&&a[i] < x)
				i++;
			if (i < j)
				a[j--] = a[i];
		}
		a[i] = x;
		QuickSort(a, l, i - 1);
		QuickSort(a, i + 1, r);
	}
}

int main()
{
	int r;
	cout << "����������";
	cin >> r;
	cout << "����" << r << "�����֣�";
	for (int i = 0; i < r; ++i)
		cin >> a[i];
	QuickSort(a, 0, r - 1);
	cout << "�����" ;
	for (int i = 0; i < r; ++i)
		cout << a[i]<<" ";
	cout << endl;
	system("pause");
	return 0;
}