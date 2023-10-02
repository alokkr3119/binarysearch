// first and last occurrence
# include<bits/stdc++.h>
using namespace std;
// brute force
pair<int,int> falo(vector<int>arr,int key)
{
    int first=-1,last=-1;
    int n=arr.size();
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            if(first==-1)
            first=i;
            last=i;
        }
        
    }
    return make_pair(first,last);
    
}
//optimal using binary search

int main()
{
    vector<int>arr={3,4,13,13,13,20};
    int key=13;
    pair<int,int>result=falo(arr,key);
    cout<<"first occurrence:"<<result.first<<endl;
    cout<<"last occurrenece:"<<result.second<<endl;
    return 0;
}