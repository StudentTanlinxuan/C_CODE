//#include<iostream>
//#include<math.h>
//#include<iomanip>
//
//using namespace std;
//
//// 二分法求平方根
//// 还有一种方法是牛顿迭代法
//double sqrtCount(double x, double precision) {
//	if (x < 0)
//		return -1;
//	double low = 1, up = x;
//	if (x > 0 && x < 1)
//		low = x, up = 1;
//	while (low <= up) {
//		double mid = low + (up - low) / 2.0;
//		if (abs(mid * mid - x) <= precision)
//			return mid;
//		else if (mid * mid > x)
//			up = mid;
//		else if (mid * mid < x)
//			low = mid;
//	}
//	return -1;
//}
//
//void test1()
//{
//	// 输入一个正整数。计算其平方根，并将结果按取1~6位小数分六行显示出来
//	// cout << setfill('0') << setw(5) << b << endl;
//	// setfill() 表示宽度不够用什么补
//	// setw() 表示输出宽度，默认右对齐
//	double x = 2, precision = 0.0000000001;
//	//double res = sqrtCount(x, precision);
//	double res = sqrt(2);
//
//	cout << setprecision(2) << res << endl;
//	cout << setprecision(3) << res << endl;
//	cout << setprecision(4) << res << endl;
//	cout << setprecision(5) << res << endl;
//	cout << setprecision(6) << res << endl;
//	cout << setprecision(7) << res << endl;
//}
//
//int main()
//{
//	test1();
//	return 0;
//}