#include <cctype>
#include <iostream>
#include <string>

using namespace std;

int main(){
	int x;
	string s, result;
	cin >> x;
	cin >> s;
	for (int i = 97; i <= 122; i++){
		if (result == "NO"){
			break;
		} else {
			result = "NO";
		}
		for (char j : s){
			if ((char)i == tolower(j)){
				result = "YES";
				break;
			}
		}
	}
	cout << result << endl;
	return 0;
}
