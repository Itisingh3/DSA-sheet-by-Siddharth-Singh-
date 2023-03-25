class Solution {
public:

    bool is_palin(string s, int i, int j)
    {
        while (i < j)
        {
            if (s[i] == s[j])
                i++,j--;
            else
                return false;
        }
        return true;
    }

    bool validPalindrome(string s) {
    int i = 0;
    int j = s.size() - 1;
    while (i <= j)
    {
        if (s[i] == s[j])
            i++, j--;
        else
            return is_palin(s, i + 1, j) || is_palin(s, i, j - 1);
    }
    return true;


    }
};
