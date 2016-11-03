#include <iostream>
#include <set>

using namespace std;

int main(){
	
	char base[] = {'0','1','2','3','4','5',
				   '6','7','8','9','A','B',
				   'C','D','E','F','a','b',
				   'c','d','e','f'};


	set<char> goodnumbers(base,base+22);

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
