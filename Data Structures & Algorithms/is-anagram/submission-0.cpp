class Solution {
public:
    bool isAnagram(string s, string t) {
        int s_size = s.size();
        if(s_size != t.size())
        return false;

        int hash_s[26] = {0};
        int hash_t[26] = {0};

        for(int i=0; i<s_size;i++){
            hash_s[s[i] -'a']++;
            hash_t[t[i] - 'a']++;

        }

        for(int i = 0; i<26;i++){
            if(hash_s[i] !=hash_t[i]) 
            return false;
        }
        return true;
    }
};
