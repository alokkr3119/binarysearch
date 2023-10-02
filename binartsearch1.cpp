# include<bits/stdc++.h>
using namespace std;
int bs(vector<int> & nums,int target)
{
    int n=nums.size();
    int low=0,high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if (nums[mid]==target) return mid;
        else if(target>nums[mid]) low=mid+1;
        else high=mid-1;
    }
    return -1;  

}
int main()
{
    vector<int>nums={3,4,5,6,7,8,2,25,45};
    int target=6;
    cout<<"the target is at index :"<<bs(nums,target);
    return 0;
}