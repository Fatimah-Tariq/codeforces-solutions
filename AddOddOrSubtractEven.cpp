#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long int a, b, ans, dis;
    cin >> t;
//t = 1;
    while(t--){
        ans = dis = 0;
        cin >> a >> b;
       // a = 2, b = 4;
        if(a == b){
            cout<< 0 <<"\n";
            continue;
        }
        if(a > b){
            dis = a - b;
            ans++;
            if(dis % 2 != 0){
                ans++;
            }
        }
        else if(a < b){
            dis = b - a;
            ans++;
            if(dis % 2 != 1){
                ans++;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}