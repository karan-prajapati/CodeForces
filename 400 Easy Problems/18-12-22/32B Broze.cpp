#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    cin >> s;
    int x {};
    while (x < s.size()){
        if (s.at(x) == '.'){
            cout << "0";
        } else if (s.at(x) == '-' and s.at(x + 1) == '.'){
            cout << "1";
            x++;
        } else if (s.at(x) == '-' and s.at(x + 1) == '-'){
            cout << "2";
            x++;
        }
        x++;
    }
    cout << endl;
    return 0;
}
