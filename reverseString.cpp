Question:
Write a function that reverses a string. The input string is given as an array of characters s.
You must do this by modifying the input array in-place with O(1) extra memory.

Constraints:

1 <= s.length <= 105
s[i] is a printable ascii character.
**********************************************************************************************************************************************************************
Approach 1:
i. Take 2 pointers pointing at start and end of the array or string.
ii. keep swapping until reached the middle.

Code:
class Solution {
public:
    void reverseString(vector<char>& s) {
        int start=0,end=s.size()-1;
        while(start<end){
          std::swap(s[start],s[end]);
          ++start;
          --end;
        }
    }
};

Time Complexity:O(N/2)
Auxiliary Space Complexity:O(1)

**********************************************************************************************************************************************************************
Approach 2:
i. Using STL 

Code:
class Solution {
public:
    void reverseString(vector<char>& s) {
       reverse(s.begin(),s.end());
    }
};

*********************************************************************************************************************************************************************
