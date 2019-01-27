#include<iostream>
#include<vector>

using namespace std;

//class Solution {
//public:
//	void reOrderArray(vector<int> &array) {
//		if (array.size() == 0 || array.size() == 1){
//			return;
//		}
//		int i = 0;
//		int j = 0;
//		while (j < array.size()&&i < array.size()){
//			while (i < array.size()&&array[i] % 2 != 0){
//				++i;
//				//找到第一个偶数
//			}
//			j = i + 1;
//			while (j < array.size()&&array[j] % 2 == 0){
//				++j;
//				//找到第一个奇数
//			}
//			swap(array[i], array[j]);
//		}
//	}
//};
class Solution {
public:
	void reOrderArray(vector<int> &array) {
		for (int i = 0; i < array.size(); i++){
			for (int j = array.size() - 1; j>i; j--){
				if (array[j] % 2 == 1 && array[j - 1] % 2 == 0)
					swap(array[j], array[j - 1]);
			}
		}
	}
};

void TestFunc(){
	vector<int> array = { 1, 2, 3, 4, 5, 6, 7, 8 };
	Solution s;
	s.reOrderArray(array);
	for (auto i : array){
		cout << i << " ";
	}
	cout << endl;
}

int main(){
	TestFunc();
	system("pause");
	return 0;
}