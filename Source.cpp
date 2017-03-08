#include<iostream>
using namespace std;
int main()
{
	cout << "for Stressan's method you must  have to enter n*n matrices/n";
	int a[50][50], b[50][50], c[50][50]; int A[50][50]; int B[50][50];
	int x, y, i, j, m, n, p1, p2, p3, p4, p5, p6, p7;

	cout << "\nEnter the number of rows and columns for Matrix A\n\n";
	cin >> x >> y;// x denotes number of rows in matrix A  &  y denotes number of columns in matrix A
	cout << "\n\nEnter elements for Matrix A\n";
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			cin >> a[i][j];
		}

	}

	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			cout << "\t" << a[i][j];
		}
		cout << "\n\n";
	}

	cout << "\nEnter the number of rows and columns for Matrix B:::\n\n";
	cin >> m >> n; // m denotes number of rows in matrix B &  n denotes number of columns in matrix B


	cout << "\n\nEnter elements for Matrix B \n\n";
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			cin >> b[i][j];
		}
		cout << "\n";
	}

	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			cout << "\t" << b[i][j];
		}
		cout << "\n\n";
	}
	if (y == m)
	{
		for (i = 0; i < x; i++)
		{
			for (j = 0; j < n; j++)
			{
				c[i][j] = 0;
				for (int k = 0; k < m; k++)
				{
					c[i][j] = c[i][j] + a[i][k] * b[k][j];
				}
			}
		}


		cout << "\n\nMultiplication of Matrix A and Matrix B using iterative method :\n\n";
		for (i = 0; i < x; i++)
		{
			for (j = 0; j < n; j++)
			{
				cout << "\t" << c[i][j];
			}
			cout << "\n\n";
		}
	}
	else
	{
		cout << "\n\nMultiplication is not possible";
	}
	p1 = (a[0][0] + a[1][1])*(b[0][0] + b[1][1]);
	p2 = (a[1][0] + a[1][1])*b[0][0];
	p3 = a[0][0] * (b[0][1] - b[1][1]);
	p4 = a[1][1] * (b[1][0] - b[0][0]);
	p5 = (a[0][0] + a[0][1])*b[1][1];
	p6 = (a[1][0] - a[0][0])*(b[0][0] + b[0][1]);
	p7 = (a[0][1] - a[1][1])*(b[1][0] + b[1][1]);

	c[0][0] = p1 + p4 - p5 + p7;
	c[0][1] = p3 + p5;
	c[1][0] = p2 + p4;
	c[1][1] = p1 - p2 + p3 + p6;
	cout << "\n\nMultiplication of Matrix A and Matrix B using strassen's method is :\n\n";
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < n; j++)
		{
			cout << "\t" << c[i][j];

		}
		cout << "\n\n";
	}


	return 0;
}