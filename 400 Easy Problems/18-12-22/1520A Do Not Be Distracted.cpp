#include <iostream>
#include <string>

using namespace std;

bool find_value(string str, int start_index, int end_index, char value){
    for (int i = start_index; i < end_index; i++){
        if (str.at(i) == value){
            return true;
        }
    }
    return false;
}

int main(){
    int test_case, n;
    cin >> test_case;
    for (; test_case > 0; test_case--){
        string s, result {"YES"};
        cin >> n;
        cin >> s;
        char check {s.at(0)};
        for (int i = 1; i < n; i++){
            if (check != s.at(i)){
                if (find_value(s, i, n, check)){
                    result = "NO";
                    break;
                } else {
                    result = "YES";
                    check = s.at(i);
                }
            }
        }
        cout << result << endl;
    }
    return 0;
}
