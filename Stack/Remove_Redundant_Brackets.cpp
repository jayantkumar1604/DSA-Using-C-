#include<bits/stdc++.h>
using namespace std;

bool redundantbracket(string &str){
    stack<char>st;
    for(int i=0;i<str.length();i++){
        char ch = str[i];
        if(ch=='(' || ch=='+' || ch=='-' || ch=='*' || ch=='/'){
            st.push(ch);
        }
        else if(ch==')'){
            int operatorcount=0;
            while(!st.empty() && st.top() != '('){
                char temp=st.top();
                if(temp=='+' || temp=='-' || temp=='*' || temp=='/'){
                    operatorcount++;
                }
                st.pop();
            }
            st.pop();
            if(operatorcount==0){
                return true;
            }
        }
    }
    return false;
}
int main(){
    string str="((a+b)+(c*d))";
    bool ans=redundantbracket(str);

    if(ans==true){
        cout<<"redundant Brackets Present"<<endl;
    }
    else{
        cout<<"Redundant Brackets not Present"<<endl;
    }
    return 0;

}