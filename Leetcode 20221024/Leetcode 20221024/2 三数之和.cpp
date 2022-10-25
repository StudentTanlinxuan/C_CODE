#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
class MyPrint
{
public:
    void operator()(int val)
    {
        cout << val << " ";
    }
};

vector<vector<int>> threeSum(vector<int>& nums) 
{

    vector<vector<int>> result;
    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > 0) {
            return result;
        }
        if (i > 0 && nums[i] == nums[i - 1]) {
            continue;
        }
        int left = i + 1;
        int right = nums.size() - 1;
        while (right > left)
        {
                if (nums[i] + nums[left] + nums[right] > 0)
                {
                    right--;
                }
                else if (nums[i] + nums[left] + nums[right] < 0)
                {
                    left++;
                }
                else
                {
                    //result.push_back(vector<int>{nums[i], nums[left], nums[right]});
                    //// 去重逻辑应该放在找到一个三元组之后，对b 和 c去重
                    //while (right > left && nums[right] == nums[right - 1]) right--;
                    //while (right > left && nums[left] == nums[left + 1]) left++;
                    vector<int> temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[left]);
                    temp.push_back(nums[right]);
                    sort(temp.begin(), temp.end());
                    if (result.size() == 0)
                    {
                        result.push_back(temp);
                    }

                    else
                    {
                        int quit = true;
                        for (int i = 0; i < result.size(); i++)
                        {
                            if (temp[0] == result[i][0] &&
                                temp[1] == result[i][1] &&
                                temp[2] == result[i][2])
                            {
                                quit = false;
                                break;
                            }
                        }
                        if (quit == true)
                        {
                            result.push_back(temp);
                        }
                    }
                    cout << nums[i] << " " << nums[left] << " " << nums[right] << endl;
                    left++;
                    right--;
                }
            
        }
    }
    return result;
 //   vector<vector<int>> result;
 //   sort(nums.begin(), nums.end());

 //   for (int i = 0; i < nums.size(); i++)
 //   {
 //       if (nums[i] > 0) {
 //           return result;
 //       }
 //       if (i > 0 && nums[i] == nums[i - 1]) {
 //           continue;
 //       }
 //       int left = i + 1;
 //       int right = nums.size() - 1;
 //       while (right > left)
 //       {
 //               if (nums[i] + nums[left] + nums[right] > 0)
 //               {
 //                   right--;
 //               }
 //               else if (nums[i] + nums[left] + nums[right] < 0)
 //               {
 //                   left++;
 //               }
 //               else
 //               {
 //                   result.push_back(vector<int>{nums[i], nums[left], nums[right]});
 //                   // 去重逻辑应该放在找到一个三元组之后，对b 和 c去重
 //                   while (right > left && nums[right] == nums[right - 1]) right--;
 //                   while (right > left && nums[left] == nums[left + 1]) left++;

 //                   left++;
 //                   right--;
 //                   cout << nums[i] << " " << nums[left] << " " << nums[right] << endl;
 //               }
 //           
 //       }
 //   }
	//for (int i = 0; i < result.size(); i++)
	//{
	//	for_each(result.at(i).begin(), result.at(i).end(), MyPrint());
	//}
	//return result;

    //vector<vector<int>> result;
    //int cur = 0;
    //int next = 0;
    //int end = nums.size() - 1;

    //next = cur + 1;
    //while (cur < end - 1)
    //{
    //    while (end > next)
    //    {
    //        if (cur != next && next != end && cur != end)
    //        {
    //            if (nums[cur] + nums[next] + nums[end] == 0)
    //            {
    //                vector<int> temp;
    //                temp.push_back(nums[cur]);
    //                temp.push_back(nums[next]);
    //                temp.push_back(nums[end]);
    //                sort(temp.begin(), temp.end());
    //                if (result.size() == 0)
    //                {
    //                    result.push_back(temp);
    //                }

    //                else
    //                {
    //                    int quit = true;
    //                    for (int i = 0; i < result.size(); i++)
    //                    {
    //                        if (temp[0] == result[i][0] &&
    //                            temp[1] == result[i][1] &&
    //                            temp[2] == result[i][2])
    //                        {
    //                            quit = false;
    //                            break;
    //                        }
    //                    }
    //                    if (quit == true)
    //                    {
    //                        result.push_back(temp);
    //                    }
    //                }
    //            }
    //        }
    //        end--;
    //    }
    //    end = nums.size() - 1;
    //    if (next < end)
    //    {
    //        next++;
    //    }
    //    else
    //    {
    //        cur++;
    //        next = cur + 1;
    //    }
    //}
    //return result;
}
int main()
{
	//[3, 0, -2, -1, 1, 2]
    //[-1, 0, 1, 2, -1, -4]
    // -2 0 0 2 2
	vector<int> v1;
	v1.push_back(-2);
	v1.push_back(0);
	v1.push_back(0);
	v1.push_back(2);
	v1.push_back(2);
	//v1.push_back(-4);
	vector<vector<int>> ret;
	ret = threeSum(v1);
    for (int i = 0; i < ret.size(); i++)
    {
	    for_each(ret.at(i).begin(), ret.at(i).end(), MyPrint());
    }
	return 0;
}