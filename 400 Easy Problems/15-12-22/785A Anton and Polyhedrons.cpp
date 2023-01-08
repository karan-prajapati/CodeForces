#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){
    map<string, int> data;
    data["Tetrahedron"] = 4;
    data["Cube"] = 6;
    data["Octahedron"] = 8;
    data["Dodecahedron"] = 12;
    data["Icosahedron"] = 20;
    
    int x, result {};
    string s;
    cin >> x;
    for (; x > 0; x--){
        cin >> s;
        auto search = data.find(s);
        result += search->second;
    }
    cout << result << endl;
    return 0;
}
