#include <bits/stdc++.h>
#define ec "\n"
using namespace std;

//L : left
//M : Mid
//R : Right
void Merge(vector<int> &v, int L, int M, int R){
	vector<int> aux(v.size());
	int i = L;
	int j = M + 1;
	int k = L;

	while(i <= M && j <= R){
		if(v[i] < v[j]){
			aux[k] = v[i++];
		}else {
			aux[k] = v[j++];
		}
		k++;
	}

	//Left past has elements
	while(i <= M){
		aux[k] = v[i++];
		k++;
	}

	//Right past has elements
	while(j <= R){
		aux[k] = v[j++];
		k++;
	}

	for(int i = L; i <= R; i++){
		v[i] = aux[i];
	}


}
void MergeSort(vector<int> &v, int L, int R){
	if(R > L){
		int m = (L + R)/2;
		MergeSort(v, L, m);
		MergeSort(v, m + 1, R);
		Merge(v, L, m, R);
	}

}
int main(){
	vector<int> v = {1,6,3,12,9,18,22,4,37,29,15,45};
	vector<int>::iterator it;
	cout << "Before:\n";
	for(it = v.begin(); it != v.end(); it++){
		cout << *it << " ";
	}
	cout << ec;
	MergeSort(v,v[0], v.size() - 1);
	cout << "After:\n";
	for(it = v.begin(); it != v.end(); it++){
		cout << *it << " "; 
	}
	cout << ec;


	return 0;
}