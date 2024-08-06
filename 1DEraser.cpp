#include <iostream>
using namespace std;

int main() {
    int t, n, k;
    cin >> t;
    string s;
    while(t--){
        cin >> n >> k >> s;
        int result = 0;
        int i = 0;
        while(i < n){
            if(s[i] == 'B' ){
                i = min(n, i + k);
                result += 1;
            }else{
                i++;
            }
        }
        cout << result << endl;
    }
    return 0;
} 