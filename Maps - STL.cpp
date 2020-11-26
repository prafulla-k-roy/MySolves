#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    map<string,int> m;
    int t;
    cin >> t;
    string name;
    int marks;
    while (t--) {
        int ch(0);
        cin >> ch;
        switch(ch) {
            case 1: 
            {
            cin >> name >> marks;
            map<string,int>::iterator itr = m.find(name);
            if(itr == m.end())
                m.insert(make_pair(name,marks));
            else
                itr->second += marks;
            break;
            }
            
            case 2:
            {
            cin >> name;
            m.erase(name);
            break;
            }
            
            case 3:
            {
            cin >> name;
            if( m[name] ){
                cout << m[name] << endl;
            }
            else{
                cout << "0\n";
            } 
            break;
            }
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}



