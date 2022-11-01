#include<iostream>
#include<vector>

using namespace std;
vector<int> plusOne(vector<int>& digits) 
{
    int end = digits.size() - 1;
    if (digits[end] < 9)
    {
        digits[end] += 1;
    }
    else
    {
        // 往前找不等于9的
        int i = end;
        int j = 0;
        int sign = false;
        while (i >= 0)
        {
            if (digits[i] != 9)
            {
                sign = true;
                j = i;
                break;
            }
            i--;
        }
        cout << sign << endl;
        if (sign == false)
        {
            digits[0] = 1;
            if (digits.size() == 1)
            {
                digits.push_back(0);
            }
            else
            {
                for (int i = 1; i <= digits.size() - 1; i++)
                {
                    digits[i] = 0;
                }
                digits.push_back(0);
            }
        }
        else
        {
            digits[j] += 1;
            for (int i = j + 1; i <= end; i++)
            {
                digits[i] = 0;
            }
        }
    }
    return digits;
}
int main()
{
    vector<int> v;
    v.push_back(9);
    //v.push_back(9);

    v = plusOne(v);

	return 0;
}