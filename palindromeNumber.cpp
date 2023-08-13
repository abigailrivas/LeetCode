class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        string n = to_string(x);
        string reverse;
        for(int i = n.length() - 1; i >= 0; i--) reverse += n[i];
        return reverse == n;
    }
};
