 #include<iostream>
 using namespace std;

 int main()
 {
    long long int n; 
    cin >> n;

    //Because doing 5^n, last 2 digits will always be 25. So, we're playiong smart by not doing any calculation and simply printing answer.
    cout << 25;
    return 0;
 }