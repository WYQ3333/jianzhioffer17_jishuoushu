#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
	void reOrderArray(vector<int> &array) {
		if (array.size() == 0 || array.size() == 1){
			return;
		}
		int i = 0;
		int j = 0;
		while (j < array.size()&&i < array.size()){
			while (i < array.size()&&array[i] % 2 != 0){
				++i;
				//找到第一个偶数
			}
			j = i + 1;
			while (j < array.size()&&array[j] % 2 == 0){
				++j;
				//找到第一个奇数
			}
			swap(array[i], array[j]);
		}
	}
};

void TestFunc(){
	vector<int> array = { 1, 2, 3, 4, 5, 6, 7, 8 };
	Solution s;
	s.reOrderArray(array);
	for (auto i : array){
		cout << array[i] << " ";
	}
	cout << endl;
}

int main(){
	TestFunc();
	system("pause");
	return 0;
}