#include<iostream>
using namespace std;


void Nhap_Mang(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << "\nNhap phan tu thu " << i << ": ";
		cin >> a[i];
	}
}


void Xuat_Mang(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << a[i] << "  ";
	}
}


void Xu_Li(int a[], int b[], int c[], int n, int m, int &k)
{
	int i = 0; 
	int j = 0; 
	while((i < n) && (j < m))
	{
		if(a[i] < b[j])
		{
			c[k] = a[i];
			k++;
			i++; 
		}
		else 
		{
			c[k] = b[j];
			k++; 
			j++; 
		}
	}

	for(; i < n; i++)
	{
		c[k] = a[i];
		k++;
	}

	for(; j < m; j++)
	{
		c[k] = b[j];
		k++;
	}
}


int main()
{
	int a[100];
	int b[100];
	int c[200];
	int n; 
	int m; 
	int k = 0;


	do
	{
		cout << "\nNhap so luong phan tu mang a: ";
		cin >> n;
		if(n <= 0 || n > 100)
		{
			cout << "\nSo luong phan tu khong hop le. Xin kiem tra lai";
		}
	}while(n <= 0 || n > 100);

	cout << "\n\n\t\t NHAP MANG A\n";
	Nhap_Mang(a, n);
	cout << "\n\n\t\t MANG A\n";
	Xuat_Mang(a, n);


	do
	{
		cout << "\nNhap so luong phan tu mang b: ";
		cin >> m;
		if(m <= 0 || m > 100)
		{
			cout << "\nSo luong phan tu khong hop le. Xin kiem tra lai";
		}
	}while(m <= 0 || m > 100);
	cout << "\n\n\t\t NHAP MANG B\n";
	Nhap_Mang(b, m);
	cout << "\n\n\t\t MANG B\n";
	Xuat_Mang(b, m);


	Xu_Li(a, b, c, n , m, k);
	cout << "\n\n\t\t MANG C SAU KHI TRON 2 MANG A VA B\n";
	Xuat_Mang(c, k);

	system("pause");
	return 0;
}

