#include <iostream>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    
    while(t--){
        cin >> n;
        int quotient = n / 3;
        if(n == 1){
            cout << 2 << endl;
        }else if(n % 3 == 0){
                cout << quotient << endl;
        }else{
            cout << quotient + 1 << endl;
        }
    }
    return 0;
} 