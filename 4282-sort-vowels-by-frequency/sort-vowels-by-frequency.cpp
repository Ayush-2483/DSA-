class Solution {
public:
 bool isVowel(char c){
    return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
 }
    string sortVowels(string s){
         unordered_map<char,int> freq;
        unordered_map<char,int> first;

        for(int i=0;i<s.size();i++){
            if(isVowel(s[i])) {
                freq[s[i]]++;

                if(first.find(s[i]) == first.end())
                    first[s[i]] = i;
            }
        }

        vector<char> v = {'a','e','i','o','u'};

        sort(v.begin(), v.end(), [&](char a, char b) {
            if(freq[a] == freq[b])
                return first[a] < first[b];

            return freq[a] > freq[b];
        });

        string temp = "";

        for(char c : v) {
            temp += string(freq[c], c);
        }

        int j = 0;

        for(int i=0;i<s.size();i++) {
            if(isVowel(s[i])) {
                s[i] = temp[j++];
            }
        }

        return s;

    }
};