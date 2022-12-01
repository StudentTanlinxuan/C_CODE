#include<iostream>

using namespace std;

int main1()
{
	//double matrix[4][4] = { 0,0.5,1,0 , 0.33333,0,0,0 , 0.33333,0,0,1 , 0.33333,0.5,0,0 };
	//double PR[4] = { 1,1,1,1 };
	//double PRtt[4] = { 0,0,0,0 };
	///*for(int i=0;i<4;i++)
	//	for(int j=0;j<4;j++)
	//	{
	//		printf("%f ",matrix[i][j]);
	//	}*/
	//for (int num = 0; num < 1000; num++)
	//{
	//	for (int i = 0; i < 4; i++)
	//	{
	//		double tt = 0;
	//		for (int j = 0; j < 4; j++)
	//		{
	//			tt += matrix[i][j] * PR[j];
	//		}
	//		PRtt[i] = tt;
	//	}
	//	PR[0] = PRtt[0]; PR[1] = PRtt[1]; PR[2] = PRtt[2]; PR[3] = PRtt[3];
	//	//printf("PR(A)=%f PR(B)=%f PR(C)=%f PR(D)=%f\n",PR[0],PR[1],PR[2],PR[3]);
	//}
	//printf("PR(A)=%f PR(B)=%f PR(C)=%f PR(D)=%f\n", PR[0], PR[1], PR[2], PR[3]);	

	//double matrix[4][4] = { 0,0.5,1,0 , 0.33333,0,0,0 , 0.33333,0,0,1 , 0.33333,0.5,0,0 };
	//double PR[4] = { 1,1,1,1 };
	///*for(int i=0;i<4;i++)
	//	for(int j=0;j<4;j++)
	//	{
	//		printf("%f ",matrix[i][j]);
	//	}*/
	//for (int num = 0; num < 10; num++)
	//{
	//	for (int i = 0; i < 4; i++)
	//	{
	//		double tt = 0;
	//		for (int j = 0; j < 4; j++)
	//		{
	//			tt += matrix[i][j] * PR[j];
	//		}
	//		PR[i] = tt;
	//	}
	//	printf("PR(A)=%f PR(B)=%f PR(C)=%f PR(D)=%f\n", PR[0], PR[1], PR[2], PR[3]);
	//}
	////printf("PR(A)=%f PR(B)=%f PR(C)=%f PR(D)=%f\n",PR[0],PR[1],PR[2],PR[3]);

	double matrix[4][4] = { 0,0.5,0,0 , 0.33333,0,0,0 , 0.33333,0,1,1 , 0.33333,0.5,0,0 };
	double PR[4] = { 1,1,1,1 };
	double d = 0.85; //阻尼系数
	int N = 4;  //节点个数
	/*for(int i=0;i<4;i++)
		for(int j=0;j<4;j++)
		{
			printf("%f ",matrix[i][j]);
		}*/
	for (int num = 0; num < 1000; num++)
	{
		for (int i = 0; i < 4; i++)
		{
			double tt = 0;
			for (int j = 0; j < 4; j++)
			{
				tt += matrix[i][j] * PR[j];
			}
			PR[i] = tt * d + (1 - d) / N;
		}
		printf("PR(A)=%f PR(B)=%f PR(C)=%f PR(D)=%f\n", PR[0], PR[1], PR[2], PR[3]);
	}
	// printf("PR(A)=%f PR(B)=%f PR(C)=%f PR(D)=%f\n",PR[0],PR[1],PR[2],PR[3]);

	return 0;
}
int main()
{
	double matrix[18][18] = {0,0,0,0,0,0,0,0,0,1/3,0,0,0,0,0,0,0,0 , 
	0,0,0,0,0,0,0,0,0,1/3,0,0,0,0,0,0,0,0 ,
	0,0,0,0,0,0,0,0,0,1/3,0,0,0,0,0,0,0,0 ,
	0,1,1/2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 ,
	1/2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 , 
	0,0,0,1/3,0,0,0,0,0,0,0,0,0,0,0,0,0,0 , 
	0,0,0,0,1/3,0,0,0,0,0,0,0,0,0,0,0,0,0 , 
	0,0,0,0,1/3,1/2,0,0,0,0,0,0,0,0,0,0,0,0 , 
	0,0,0,0,0,0,1/2,1/2,0,0,0,0,0,0,0,0,0,0 , 
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 , 
	1/2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 , 
	0,0,0,1/3,0,0,0,0,0,0,0,0,0,0,0,0,0,0 , 
	0,0,1/2,1/3,0,0,0,0,0,0,0,0,0,0,0,0,0,0 , 
	0,0,0,0,0,1/2,0,0,0,0,0,0,0,0,0,0,0,0 , 
	0,0,0,0,0,0,1/2,0,0,0,0,0,0,0,0,0,0,0 , 
	0,0,0,0,0,0,0,1/2,0,0,0,0,0,0,0,0,0,0 , 
	0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0 , 
	0,0,0,0,1/3,0,0,0,0,0,0,0,0,0,0,0,0,0 , 
	};
	//double PR[4] = { 1,1,1,1 };
	double PR[18] = { 1,1,1,1, 1,1,1, 1,1,1, 1,1,1, 1,1,1, 1,1 };

	double d = 0.85; //阻尼系数
	int N = 18;  //节点个数
	/*for(int i=0;i<4;i++)
		for(int j=0;j<4;j++)
		{
			printf("%f ",matrix[i][j]);
		}*/
	for (int num = 0; num < 10; num++)
	{
		for (int i = 0; i < 18; i++)
		{
			double tt = 0;
			for (int j = 0; j < 18; j++)
			{
				tt += matrix[i][j] * PR[j];
			}
			PR[i] = tt * d + (1 - d) / N;
		}
		printf("PR(A)=%f PR(B)=%f PR(C)=%f PR(D)=%f\n", PR[0], PR[1], PR[2], PR[3]);
	}
	// printf("PR(A)=%f PR(B)=%f PR(C)=%f PR(D)=%f\n",PR[0],PR[1],PR[2],PR[3]);

	return 0;
}