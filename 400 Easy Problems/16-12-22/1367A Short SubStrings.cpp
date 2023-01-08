#include <iostream>
#include <string>

using namespace std;

int main(){
    int test_case;
    string s;
    cin >> test_case;
    for (; test_case > 0; test_case--){
        cin >> s;
        if (s.size() > 2){
            for (int i = 0; i < s.size(); i += 2){
                cout << s.at(i);
            }
            cout << s.at(s.size() - 1) << endl;
        } else {
            cout << s << endl;
        }
    }
    return 0;
}
