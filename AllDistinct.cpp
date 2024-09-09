#include <iostream>
#include<map>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    
    while(t--){
        cin >> n;
        int x;
        int count = 0;
        map<int, int> m;
        for(int i = 0; i < n; i++){
            cin >> x;
            if(m.find(x) == m.end()){
                m[x] = 1;
            }else{
                count += 1;
            }
        }
        if(count % 2 == 0){
            cout << n - count << endl;
        }else{
            cout << n - (count + 1) << endl;
        }
    }
    return 0;
} 