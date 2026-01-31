class Solution {
public:
    bool isPalindrome(int x) {
        
        long long rev=0;
        int orginal = x;
        if(x<0) return false;
        while(x!=0)
        {
            long long digit = x%10;
        
            rev = rev*10+digit;
            x=x/10;
      
        }
            return orginal==rev;
    
}};

// class Solution {
// public:
//     bool isPalindrome(int x) {
        
//         // Negative numbers are NOT palindromes
//         if (x < 0) return false;

//         int original = x;   // store original value
//         long long rev = 0;

//         while (x != 0) {
//             int digit = x % 10;
//             rev = rev * 10 + digit;
//             x = x / 10;
//         }

//         return original == rev;
//     }
// };
