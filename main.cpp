#include <iostream>
#include <list>
#include <cstdio>
using namespace std;

list<int> l[300003];

void push(int s, int v)
{
    l[s].push_back(v);
}

void pop(int s)
{
    if(l[s].empty()) {printf("EMPTY\n");return;}
    printf("%d\n",*(--l[s].end()));
    l[s].pop_back();
}

void moves(int s, int t)
{
    l[s].splice(l[s].end(),l[t]);
}

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(0);
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