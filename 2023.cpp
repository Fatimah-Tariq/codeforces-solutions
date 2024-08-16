#include <iostream>
using namespace std;
#define ll long long


int main() {
    int t;
    cin >> t;
    
    while(t--){
        int  n, k;
        cin >> n >> k;
        int x;
        ll prod = 1;
        for(int i = 0; i < n; i++){
            cin >> x;
            prod *= x;
        }
        if(2023 % prod == 0){
            cout << "YES" << endl;
            cout << 2023 / prod << " ";
            for(int i = 0; i < k-1; i++){
                cout << 1 << " ";
            }
        }else{
            cout << "NO";
        }
        cout << endl;
    }
    return 0;
}
