#include <iostream>
#include <vector>
using namespace std;


void Reverse(vector<int>& v){
	 //int n = v.size();  // ��� �������� �������� ������ ������� � ���������� n // not me
	for(int i = 0; i < v.size()/2; ++i){
		int temp = v[i];
		v[i] = v[v.size() - 1 - i];
		v[v.size() - 1 - i] = temp;
	}
}
int main() {
	vector<int> numbers = {1, 5, 3, 4, 2};
	Reverse(numbers);
	for(auto i:numbers){
		cout << i << " ";
	}
	return 0;
}
