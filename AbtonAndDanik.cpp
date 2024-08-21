#include<iostream>
using namespace std;

int main(){
    int n = 0, countOfA = 0, countOfB = 0;
    string s;
    cin>> n;
    cin >> s;
    if(s.length() != n) { return 0;}
    for(int i =0; i<s.length(); i++){
        if(s[i] == 'A'){
            countOfA++;
        }
    }
    countOfB = n - countOfA;
    if(countOfA > countOfB){
        cout << "Anton";
    }
    else if(countOfB > countOfA){
        cout << "Danik";
    }
    else{
        cout<< "Friendship";
    }
    return 0;
}