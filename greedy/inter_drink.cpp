#include <bits/stdc++.h>
using namespace std;
using value_type = int;

int main(){
	long int shops{0};
	cin >> shops;

	vector<value_type> prices(shops,0);
	for(long int i = 0; i < shops; i++){
		cin >> prices[i];	
	}
	
	sort(prices.begin(), prices.end());
	long int days{0};
	cin >> days;
	
	for(long int i = 0; i < days; i++){
		value_type money;
		cin >> money;

		if(money < prices[0]){
			cout << 0 << "\n";	
			continue;
		}	

		if(money > prices[shops - 1]){
			cout << shops << "\n";
			continue; 	
		}

		auto pos= std::upper_bound(prices.begin(),prices.end(), money); 
		long int q_shops = pos - prices.begin();
		
		cout << q_shops << "\n"; 
	}	
	return 0;
}
