#include<iostream>
using namespace std;

void nhapMang (int a[][100], int hang, int cot)
{	
	cout<<"Nhap cac phan tu cua mang:"<<endl;
	for (int i = 0; i < hang; i++)
	{
		for(int j = 0; j<cot;j++)
		{
			printf("x[%d][%d] = ",i,j);
			cin>>a[i][j];
		}
	}
}

void xuatMang (int a[][100], int hang, int cot)
{
	for (int i = 0; i < hang; i++)
	{
		for(int j = 0; j<cot;j++)
		{
			cout<<a[i][j]<<"	";
		}
		cout<<endl<<endl;
	}
}

void a (int a[][100], int m, int n)
{
	int countPos=0, countNeg=0, count0=0;
	
	for (int i = 0; i < m; i++)
	{
		for(int j = 0; j<n;j++)
		{
			if(a[i][j] > 0)
			{
				countPos++;
			}else if (a[i][j] == 0)
			{
				count0++;
			}else{
				countNeg++;
			}
		}
	}
	cout<<"Tong so duong: "<<countPos<<endl;
	cout<<"Tong so am: "<<countNeg<<endl;
	cout<<"Tong so 0: "<<count0<<endl;
}

int maxValue (int a[][100], int m, int n)
{
	int max = a[0][0];
	for (int i = 0 ; i < m ; i++)
	{
		for( int j = 0 ; j <n; j++)
		{
			if(a[i][j] > max)
			{
				max = a[i][j];
			}
		}
	}
	return max;
}

int minValue (int a[][100], int m, int n)
{
	int min = a[0][0];
	for (int i = 0 ; i < m ; i++)
	{
		for( int j = 0 ; j <n; j++)
		{
			if(a[i][j] < min)
			{
				min = a[i][j];
			}
		}
	}
	return min;
}

int c (int a[][100], int m, int n)
{
	
		// tong dong 1:
		int max = 0;
		int result=0;
		for(int j = 0; j < n ; j++)
		{
			max += a[0][j];
		}
		//
		
		for ( int i = 1 ; i < m; i++)
		{	
			int total2=0;
			for(int j = 0; j < n; j++)
			{
				total2 += a[i][j];
			}
			
			if(total2 > max)
			{
				max = total2;
				result = i;
			}
		}
		
		return result;
	
}

void d (int a[][100], int m, int n)
{
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n-1; j++ )
		{
			for(int k = j+1; k < n; k++)
			{
				if(a[i][j] > a[i][k])
				{
					int temp = a[i][j];
					a[i][j] = a[i][k];
					a[i][k] = temp;
				}
			}
		}
	}
}

int e(int a[][100], int m, int n)
{
	int result = 0;
	if(m != n)
	{
		return -1;
	}
	else
	{
		
		for ( int i = 0; i < m; i++)
		{
			result += a[i][i];
		}
	
		for(int j = 0; j < m; j++)
		{
			result += a[j][m-1-j];
		}
	}
	return result;
}

void f (int a[][100], int m, int n)
{
	
		for(int i = 0; i < m ; i++)
		{
			for(int j = 0; j < n; j++)
			{
				if(a[i][j] == a[j][i])
				{
					continue;
				}
				else
				{
					cout<<"A khong la ma tran doi xung";
					return;	
				}
			}
		}
	
	cout<<"A la ma tran doi xung";
}

int g(int a[][100], int m, int n)
{	
	int max = a[0][0];
	if(m!=n)
	{
		return -1;
	}else{
		
		for(int i = 1; i < m; i++)
		{
			if(a[i][i] > max)
			{
				max = a[i][i];
			}
		}
	}
	return max;
}

int h(int a[][100], int m, int n)
{
	int count = 0;
	if(m!=n)
	{
		return -1;
	}else{
		for(int i = 0; i<m; i++)
		{
			if(a[i][m-1-i] < 0)
			{
				count++;
			}
		}
	}
	return count;
}
int main ()
{
	int A[100][100],hang,cot;
	cout<<"Nhap hang,cot:";
	cin>>hang>>cot;
	nhapMang(A,hang,cot);
	xuatMang(A,hang,cot);
//	a(A,hang,cot);
//	cout<<maxValue(A,hang,cot);
//	cout<<c(A,hang,cot);
 //	d(A,hang,cot);
 //	xuatMang(A,hang,cot);
// cout<<e(A,hang,cot);	
	f(A,hang,cot);
//	cout<<g(A,hang,cot);
//	cout<<h(A,hang,cot);
}
