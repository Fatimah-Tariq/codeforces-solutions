#include <bits/stdc++.h>
#include<vector>
using namespace std;

////THIS SOLIUTION ALSO WORKED BUT ON CODEFORCES IT GAVE TIME LIMIT EXCEEDED ERROR -_- 
// int main() {
//     long long int t, n;
//     cin >> t;
    
//     while(t--){
//         cin >> n;
//         vector<long long int> v;
//         vector<long long int> v1;
//         long long int x, currMax = 0, diff = 0;
//         for(long long int i = 0; i < n; i++){
//             cin >> x;
//             v.push_back(x);
//         }
//         for(long long int i = 0; i < n; i++){
//             v1 = v;
//             v1.erase(v1.begin() + i);
//             currMax = *max_element(v1.begin(), v1.end());
//             diff = v[i] - currMax; 
//             cout << diff << " ";
//         }

//         cout << endl;
//     }
//     return 0;
// }


int main() {
    long long int t, i, j, n, d;
    cin >> t;
//    t = 1;
    string s;
    
    while(t--){
        cin >> n;
        //n = 4;
        long long int a[n], b[n];
        //long long int a[n] = {4, 7, 3, 5}, b[n] = {4, 7, 3, 5};
        for(i = 0; i < n; i++){
            cin >> a[i];
            b[i] = a[i];
        }

        sort(b, b + n);
        d = b[n - 1];
        j = b[n - 2];

        for(i = 0; i < n; i++){
            if(a[i] == d){
                cout << d - j << " ";
            }else{
                cout << a[i] - d << " ";
            }
        }
        cout << endl;
    }
    return 0;
}