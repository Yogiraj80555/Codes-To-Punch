#include<iostream>
#include<vector>

int main11() {

	std::vector<std::vector<int>> arr;
	arr.resize(6);
	for (int i = 0; i < 6; i++) {
		arr[i].resize(6); //we can not use direct index to put element for this we required vector push back method to insert element 
		//so for direct indexing we use resize and doing like this
		for (int j = 0; j < 6; j++) {
			std::cin >> arr[i][j];

		}
	}


	int max = -999;
	for (int i = 2; i < 6; i++) {
		for (int j = 2; j < 6; j++) {
			int sum = 0;
			sum = arr[i - 2][j - 2] + arr[i - 2][j - 1] + arr[i - 2][j];
			sum += arr[i - 1][j - 1];
			sum += arr[i][j - 2] + arr[i][j - 1] + arr[i][j];
			if (sum > max) {
				max = sum;
			}
		}
		
	}

	std::cout << max;
	return 0;

}