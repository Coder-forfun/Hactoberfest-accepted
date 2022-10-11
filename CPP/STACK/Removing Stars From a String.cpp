class Solution {
public:
    string removeStars(string s) {
        stack<char>st;
        int n= s.length();
        for(int i=0;i<n;i++){
            if(i==0 && s[i]=='*')continue;
                //if(i==n && s[i]==) 
            if(s[i]!='*')st.push(s[i]);
            else st.pop();
        }
        s.clear();
        while(st.size()!=0){
            char temp = st.top();
            st.pop();
            s+=temp;
        }
        reverse(s.begin(),s.end());
        return s;
    }
};
