#include <bits/stdc++.h>
#define ec "\n"
using namespace std;

void bubbleSort(vector<int> &v, int n){
	bool swapped = true;
	int i = 0;
	while(i < n - 1 && swapped){
		swapped = false;
		for(int j = n - 1; j > i; j--){
			if(v[j] < v[j-1]){
				swap(v[j],v[j-1]);
				swapped = true;
			}
		}
		i++;
	}
}



int main(){
	vector<int> v;
	vector<int>::iterator it;
	v.push_back(3);
	v.push_back(5);
	v.push_back(1);
	v.push_back(23);
	v.push_back(15);
	v.push_back(9);
	v.push_back(20);
	v.push_back(32);
	v.push_back(11);
	cout << "truoc khi sap xep:\n";
	for(it = v.begin(); it != v.end(); it++){
			cout << *it << " ";
		}
		cout << ec;
	bubbleSort(v,v.size());
	cout << "sau khi sap xep:\n";

		for(it = v.begin(); it != v.end(); it++){
			cout << *it << " ";
		}
		cout << ec;

	return 0;
}