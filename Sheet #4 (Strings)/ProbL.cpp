#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

int main(){
    int N,Q;
    cin >> N >> Q;
    string S;
    cin >> S;

    while(Q>0){

        string queries;
        cin >> queries;
        if(queries == "pop_back"){
            S.pop_back();
        }else if(queries == "front"){
            cout << S.front() <<"\n";
        }else if(queries == "back"){
            cout << S.back() <<"\n";
        }else if(queries == "sort"){
            int l,r;
            cin >> l >> r;
            if (l > r) swap(l, r);
            sort(S.begin()+l-1,S.begin()+r);
        }else if(queries=="reverse"){
            int l,r;
            cin >> l >> r;
            if (l > r) swap(l, r);
            reverse(S.begin()+l-1,S.begin()+r);
        }else if(queries=="print"){
            int pos;
            cin >> pos;
            cout << S[pos-1] << "\n";
        }else if(queries == "substr"){
            int l,r;
            cin >> l >> r;
            if (l > r) swap(l, r);
            cout << S.substr(l-1,r+1-l) << "\n";
        }else if (queries == "push_back"){
            char x;
            cin >> x;
            S.push_back(x);
        }
      
        Q--;
    }

    return 0;

}