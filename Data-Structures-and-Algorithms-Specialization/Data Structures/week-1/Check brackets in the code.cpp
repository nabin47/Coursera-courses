#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main() {
    int i, sign = 0;
    string s;
    stack<pair<char, int> >st;
    cin>>s;

    for(i = 0; i < s.size(); i++){
        if(s[i] != '(' && s[i] != ')' && s[i] != '{' && s[i] != '}' && s[i] != '[' && s[i] != ']') continue;

        else if(s[i] == '(' || s[i] == '{' || s[i] == '[') st.push(make_pair(s[i], i));
        
        else if(s[i] == '}' && st.size() != 0 && st.top().first == '{') st.pop();

        else if(s[i] == ')' && st.size() != 0 && st.top().first == '(') st.pop();

        else if(s[i] == ']' && st.size() != 0 && st.top().first == '[') st.pop();

        else {
            sign = 1;
            break;
        }
    }

    if(sign == 0 && st.size() == 0) cout<<"Success"<<endl;

    else if(sign == 1) cout<<i+1<<endl;

    else if(sign == 0 && st.size() != 0) {
    
        pair<char, int> temp;
        while(!st.empty()) {
            temp = st.top();
            st.pop();
        }

        cout<<temp.second+1<<endl;
    }
    return 0;
}
