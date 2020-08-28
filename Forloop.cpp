#include <iostream>
#include <cstdio>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    cin >>a >> b;
    string numbah[9] = { "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
    for (int i=a;i<b+1;i++){
        if (i>9){
            if(i%2==0){
                cout<<"even"<<endl;
            }
            else{
                cout << "odd" <<endl;
            }
        }
        else{
            for (int j=1;j<10;j++){
                if (i==j){
                    cout << numbah[i-1] <<endl;
                }  
            }
        }
    } 
    // Complete the code.
    return 0;
}
