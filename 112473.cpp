#include <iostream>
#include <set>

using namespace std;

int main(){
	
	set<char> goodnumbers;

	for(int i = 0; i < 8; ++i){
		char c = char(i + 48);
		goodnumbers.insert(c);
	}	

	string str;
	cin >> str;

	bool ok = true;

	if(str[0] == '0'){
		ok= false;
	}
	else{
		for(int i = 0; i < str.length(); ++i){
			char c = str[i];
			if(goodnumbers.find(c) == goodnumbers.end()){
				ok = false;
				break;
			}
		}
	}

	if(ok){
		cout << "YES";
	}else{
		cout << "NO";
	}


	return 0;
}