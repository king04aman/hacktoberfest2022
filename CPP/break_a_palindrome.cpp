class Solution {
public:
    string breakPalindrome(string p) {
        
     size_t sz = p.size();
        // there is no way to replace a single character to make "a" not a palindrome
        // because no matter what we change, it is still a palindrome
        if (sz <= 1) return "";
        
        // since the input is a palindrome, we just need to check the first half only
        for (size_t i=0; i < sz/2; i++) {
            //  here we know that as long as palindrome[i] is "a", we skip it
            if (p[i] > 'a')  {
                p[i] = 'a';
                return p;
            }
        }
        
        p[sz-1] = 'b';
        return p;   
    }
};
