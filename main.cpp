#include <iostream>
#include <list>
using namespace std;

list<int> l[300003];

void push(int s, int v)
{
    l[s].push_back(v);
}

void pop(int s)
{
    list<int>::iterator i;
    if(l[s].empty()) {cout << "EMPTY" << "\n";return;}
    i = l[s].end();
    i--;
    cout << *i << "\n";
    l[s].pop_back();
}

void moves(int s, int t)
{
    l[s].splice(l[s].end(),l[t]);
}

int main() {
    int T;
    cin >> T;
    for (;T--;)
    {
        int n,q;
        for(int i = 1; i<=n; i++) l[i].clear();
        cin >> n >> q;
        for(;q--;)
        {
            int op;
            cin >> op;
            if (op == 1){
                int s, v;
                cin >> s >> v;
                push(s,v);
            }
            else if (op == 2){
                int s;
                cin >> s;
                pop(s);
            }
            else if (op == 3){
                int s, t;
                cin >> s >> t;
                moves(s, t);
            }
        }
    }
    return 0;
}