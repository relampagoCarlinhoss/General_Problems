#include <bits/stdc++.h>
using namespace std;
using value_type = int; 

int main(){
	int q_stack{0};
	int  q_choices{0};
	cin >> q_stack; 

	vector<value_type>stacks(q_stack, 0); 
	value_type worms{0};

	for(size_t i = 0; i < stacks.size(); i++){
		cin >> worms; 
		if(i == 0){
			stacks[i] = worms;	
		}
		else{
			stacks[i] += stacks[i - 1] + worms; 
		}
	}
	
	cin >> q_choices; 	
	value_type choice{0};
	for(int j = 0; j < q_choices; j++){
		cin >> choice;
		int res =  lower_bound(stacks.begin(), stacks.end(), choice) - stacks.begin() + 1;
		cout << res << "\n";
	}
	
	return 0;
}
