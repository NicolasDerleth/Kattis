#include <iostream>
#include <vector>
#include <cstring>
#include <string>
using namespace std;




int main(int argc, char **argv){
	string  newStr;
	vector <string> dups; 


	getline(cin, newStr);
	int index = 0;
	
	for(int l = 0; l < newStr.length();  l++){
		if(newStr[l] == ' '){
			
			dups.push_back(newStr.substr(index, l - index));
			index = l + 1;
			//cout << "TEstinginsadfn" << endl;
		
		}
			
		//cout << newStr[l] << endl;
		
	
	}
	dups.push_back(newStr.substr(index, (newStr.length() - index)));

	
	/*for( auto i : dups){
		cout << i << endl;
	
	}*/
	
	for(int i = 0; i < dups.size(); i++){
		for(int j = i + 1; j < dups.size(); j++){
			if(dups[i] == dups[j]){
				cout << "no" << endl;
				return 0;
			
			}
			
		
		
		
		}
	}
	cout << "yes" << endl;
	
	

				
	return 0;
}


	
	
	



	

	




