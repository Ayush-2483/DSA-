class Solution {
public:
    int countWords(string sentence){
    stringstream ss(sentence);
    string word;
    int count = 0;

    while(ss >> word){
        count++;
    }
    return count;
    }
    int mostWordsFound(vector<string>& sentences) {
        int n = sentences.size();
        int answer=0;
        for(int i=0;i<n;i++){
            answer=max(answer,countWords(sentences[i]));
        }
        return answer;
    }
};