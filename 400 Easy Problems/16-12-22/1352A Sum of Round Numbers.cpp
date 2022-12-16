#include <iostream>
#include <string>
#include <vector>

using namespace std;

string make_round(char chr, int value){
	string s1 {chr};
	for (int i = 0; i < value; i++){
		s1 += "0";
	}
	return s1;
}

int main(){
	int test_case, x;
	string s;
	cin >> test_case;
	for (; test_case > 0; test_case--){
		vector <string> vec {};
		cin >> s;
		x = s.size() - 1;
		for (char i : s){
			if (i != '0'){	
				vec.push_back(make_round(i, x));		
			}
			x--;
		}
		cout << vec.size() << endl;
		for (auto i : vec){
			cout << i << " ";
		}
		cout << endl;
	}
	return 0;
}
