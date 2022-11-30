#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
//// 方法一 排序
//int minArray(vector<int>& numbers) 
//{
//	sort(numbers.begin(), numbers.end());
//	return numbers[0];
//}
// 方法二 二分法
int minArray(vector<int>& numbers) {
    int low = 0;
    int high = numbers.size() - 1;
    while (low < high) {
        int pivot = low + (high - low) / 2;
        if (numbers[pivot] < numbers[high]) {
            high = pivot;
        }
        else if (numbers[pivot] > numbers[high]) {
            low = pivot + 1;
        }
        else {
            high -= 1;
        }
    }
    return numbers[low];
}

int main()
{

	return 0;
}