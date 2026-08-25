#include <bits/stdc++.h>
using namespace std;
using  value_type = int;
const int leng = 1000;

int main(){
	value_type q_blocos{0};	
	int max_val{0};
	int cont{0};

	cin >> q_blocos;

	vector<value_type> blocos(leng + 1, 0);
	int idx{0};
	for(int i = 0; i < q_blocos; i++){
		cin >> idx;
		blocos[idx]++;	
	}

	for(auto const &i : blocos){
		max_val = max(max_val, i);
		
		if(i != 0){
			cont++;	
		}	
	}

	cout << max_val << " " << cont << "\n";


	return 0;
}
