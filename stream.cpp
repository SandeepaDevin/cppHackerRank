#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    stringstream ss(str); vector <int> inte;
    char ch;
    int temp;
    
    while(ss) 
    {
        ss>>temp>>ch; 
        inte.push_back(temp);
    } 
    return inte;
	
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
