/*Given N strings , print unique strings
in lexiographical order
N <= 10^5
|s| <= 100000
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    set<string> s;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        string str;
        cin >> str;
        s.insert(str);

    }

    cout << "\n";
    for(auto value : s) { // here we can use iterator like 
        cout << value << endl;
    }
}