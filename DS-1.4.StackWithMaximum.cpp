#include<bits/stdc++.h>
using namespace std;

int main() {
    int num_queries = 0;
    cin >> num_queries;

    string query;
    string value;
    stack < int > s;
    int maxx;
    for (int i = 0; i < num_queries; ++i) {
        cin >> query;
        if (query == "push") {
            cin >> value;
            int val=stoi(value);

            if(s.empty())
                maxx=val;
            else if(!s.empty()&&val>maxx)
            {
                val = maxx-val;
                maxx=maxx-val;

            }
                s.push(val);
        }
        else if (query == "pop") {
            int top = s.top();
            s.pop();
                if(s.empty())
                    {
                        maxx = top;;
                    }
                else if(!s.empty()&&top<0)
                    maxx = maxx+top;
        }
        else if (query == "max") {
            cout << maxx << "\n";
        }
        else {
            assert(0);
        }
    }
    return 0;
}
