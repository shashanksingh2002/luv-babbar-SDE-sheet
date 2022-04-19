Question:
Find the Maximum and Minimum in an array

Constraints:
1<=n<=10^5
1<=arr[i]<=10^9

***********************************************************************************************************************************************************************
Approach 1:
1.keep 2 variables and find the maximum and minimum of the array.

Code:
class Solution {
public:
void minimumMaxium(vector<int>& nums) {
        int mini=INT_MAX,maxi=INT_MIN,idxMini=-1,idxMaxi=-1;
        for(int i=0;i<nums.size();i++){
          if(nums[i]<mini){
            mini=nums[i];
            idxMini=i;
          }
          if(nums[i]>maxi){
            maxi=nums[i];
            idxMaxi=i;
          }
        }
       cout<<mini<<" "<<maxi<<endl;
     }
};
Time complexity:O(n)
Space complexity:O(1)
***********************************************************************************************************************************************************************
Approach 2:
1. Tournament method using recursion.
2. Basically compare 2 elements and disgard the maximum if searching for minimum and minimum vice-versa.
  
Code:
int maximum(int st,int end,vector<int>& arr){
      if(st==end) return arr[st];
      if(end-st==1) return max(arr[st],arr[end]);
      int mid = (st+end)/2;
      return max(maximum(st,mid,arr),maximum(mid+1,end,arr));
}

int minimum(int st,int end,vector<int>& arr){
      if(st==end) return arr[st];
      if(end-st==1) return min(arr[st],arr[end]);
      int mid = (st+end)/2;
      return min(minimum(st,mid,arr),minimum(mid+1,end,arr));
}

Time Complexity:O(n)
Auxiliary Space Complexity:O(logn)
***********************************************************************************************************************************************************************
Approach 3:
i. Using STL

Code:
void maximumANDminimum(vector<int>& arr){
  cout<<"MAXIMUM:"<<*max_element(arr.begin(),arr.end())<<endl;
  cout<<"MINIMUM:"<<*min_element(arr.begin(),arr.end())<<endl;
}
