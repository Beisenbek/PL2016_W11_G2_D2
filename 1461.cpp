#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main(){
	
	vector<int> v;

	int n,x;
	cin >> n;

	for(int i = 0; i < n; ++i){
		cin >> x;
		v.push_back(x);
	}

	int i = 0;
	int j = 0;

	while(i < v.size()){

		int cnt = 1;
		while(v[i] == v[++j] && j < v.size()){
			cnt++;
		}

		if(cnt >= 3){
			vector<int>::iterator it = v.begin() + i;
			vector<int>::iterator it2 = v.begin() + j;
			v.erase(it,it2);
			i = 0;
			j = 0;
		}else{
			i++;
			j = i;
		}
	}


	cout << n - v.size();


	return 0;
}