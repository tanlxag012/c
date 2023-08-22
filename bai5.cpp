#include<iostream>
#define m 100
using namespace std;

void nhapMang (int a[][m], int hang, int cot)
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

void xuatMang (int a[][m], int hang, int cot)
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

void congMaTran (int a[][m], int b[][m], int hang, int cot, int result[][m])
{
	for (int i = 0; i < hang; i++)
	{
		for(int j = 0; j<cot;j++)
		{
			result[i][j] = a[i][j] + b[i][j];
		}
	}
}

void tichMaTran (int a[][m], int b[][m], int hang, int cot)
{
	 int result[100][100];
	 
	for(int i=0;i<hang;++i)
        {
            for( int j=0;j<cot;++j)
            {
                 result[i][j]=0;
                 
                for( int k=0;k<cot;++k)
                {
                	result[i][j]+=(a[i][k]*b[k][j]);
				}
                    
                    printf("%d ",result[i][j]);
                       
            }
            
            printf("\n");
        }
}

void hoanVi1 (int a[][m], int hang, int cot)
{
	for ( int i = 0 ; i < hang - 1; i++)
	{
		for( int j = i+1;  j < hang; j++){
			if(a[i][0] > a[j][0])
			{
				for(int k = 0 ; k < cot; k++)
				{
					int temp = a[i][k];
					a[i][k] = a[j][k];
					a[j][k] = temp;
				}
			}
		}
	}
}

void hoanVi2 (int a[][m], int hang, int cot)
{
	
	for(int q = 0 ; q <hang; q++)
	{	
		int max = 0;
		for (int z = 0; z < cot; z++)
		{
			max += a[q][z]; // sum dong 1
		}
		
		for(int i = q+1; i < hang; i++)
		{
			int max2 = 0;
			for(int j = 0; j < cot; j++)
			{
				max2 += a[i][j]; // sum dong 2
			}
			
			if(max > max2) // sum 1 > sum 2
			{
				for(int k = 0; k<cot; k++)
				{
					int temp = a[q][k];
					a[q][k] = a[i][k];
					a[i][k] = temp;
				}
					
			}
		
		}
	}
	
}

int main () {
	int A[100][100], B[100][100];
	int hang, cot;
	
/*	cout<<"Nhap hang,cot:";
	cin>>hang>>cot;
	nhapMang(A,hang,cot);
	nhapMang(B,hang,cot);
	
	system("cls");
	xuatMang(A,hang,cot);
	cout<<endl;
/*	
	xuatMang(B,hang,cot);
	congMaTran(A,B,hang,cot,result);
	cout<<endl;
	xuatMang(result,hang,cot);
	return 0;
*/
//	tichMaTran(A,B,hang,cot);
/*	cout<<"Nhap hang,cot:";
	cin>>hang>>cot;
	nhapMang(A,hang,cot);
	system("cls");
*/
	hoanVi2(A,hang,cot);
	xuatMang(A,hang,cot);
}
