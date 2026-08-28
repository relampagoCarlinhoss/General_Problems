#include <bits/stdc++.h>
using namespace std;
using value_type = int;

int main(){
	int casos{0};
	cin >> casos;

	while(casos--){
		value_type q_task{0};
		cin >> q_task;

		std::vector<value_type> storage_t(q_task*2 + 1);	
		for(int k = 1; k <= q_task*2; k++){
			std::cin >> storage_t[k];	
			if(k > q_task + 1){
				if(storage_t[k - 1] > storage_t[k - q_task] ){
					storage_t[k - q_task] = storage_t[k - 1];		
				}		
			}
		}
		value_type dur{0};	
		for(int i = 1; i <= q_task; i++){
			dur = storage_t[i + q_task] - storage_t[i];
			std:: cout << dur << " ";
		}
		
		std::cout << "\n";
	}
}
