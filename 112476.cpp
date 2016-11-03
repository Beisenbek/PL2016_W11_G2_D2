#include <iostream>
#include <set>

using namespace std;

int main(){
	
	set<char> s;

	string str;
	cin >> str;

	string res = "";

	for(int i = 0; i < str.length(); ++i){
		if(s.find(str[i]) == s.end()){
			s.insert(str[i]);
			res += str[i];
		}
	}

	cout << res;

	return 0;
}
