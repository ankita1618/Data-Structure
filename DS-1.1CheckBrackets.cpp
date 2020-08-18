#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    stack <int>stk,stk1;
    int index=0,i,c=0;
   string s;
   cin>>s;
   for(i=0;i<s.size();i++)
   {
       if(s[i]=='('||s[i]=='['||s[i]=='{')
            {stk.push(s[i]);
            index = i+1;
            stk1.push(index);}
        else if(!stk.empty()&&s[i]==')'&&stk.top()=='(')
           {stk.pop();stk1.pop();}
        else if(!stk.empty()&&s[i]==']'&&stk.top()=='[')
            {stk.pop();stk1.pop();}
        else if(!stk.empty()&&s[i]=='}'&&stk.top()=='{')
            {stk.pop();stk1.pop();}
        else if(s[i]==')'||s[i]=='}'||s[i]==']'
                    ||s[i]=='('||s[i]=='['||s[i]=='{')
            {index = i+1;  c=1;
                break;

                }
   }
   if(stk.empty()&&i==s.size())
    cout<<"Success";
   else
   {
       if(c==1)
       cout<<index;
       else
        cout<<stk1.top();
   }
}

