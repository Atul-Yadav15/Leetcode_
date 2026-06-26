class Solution {
public:
    bool vowels(char ch){
        if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'||ch=='u'||ch=='A'|| ch=='E'|| ch=='I'|| ch=='O'|| ch=='U'){
            return 1;
        }
        else{
            return 0;
        }
    }
    string reverseVowels(string s) {
        string ans;
        for(int i=0; i<s.size(); i++){
            if(vowels(s[i])){
                ans+=s[i];
            }
        }
        reverse(ans.begin(),ans.end());
        int j=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='a'|| s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u'|| s[i]=='A'|| s[i]=='E'||s[i]=='I'|| s[i]=='O'||s[i]=='U'){
                s[i]=ans[j];
                j++;
            }
        }
        return s;
    }
};