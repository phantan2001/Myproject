#include <bits/stdc++.h>
#define ec "\n"
using namespace std;

void InsertionSort(vector<int> &v, int n){
	int current,pos;
	for(int i = 1; i < n; i++){
		current = v[i];
		pos = i;
		while(pos > 0 && v[pos - 1] > current){
			v[pos] = v[pos - 1];
			pos--;
		}
		if(pos != i){
			v[pos] = current;
		}
	}


}



int main()
{
	vector<int> v = {1,4,30,12,3,7,20,9,18};
	vector<int>::iterator it;
	cout << "Before:\n";
	for(it = v.begin(); it != v.end(); it++){
		cout << *it << " ";
	}
	cout << ec;

	InsertionSort(v, v.size());
	cout << "After:\n";
	for(it = v.begin(); it != v.end(); it++){
		cout << *it << " ";
	}
	cout << ec;
	
	return 0;
}