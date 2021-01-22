#include<iostream>
#include<vector>
#include<cstdlib>

int maina() {
	int n;
	std::cin >> n;
	std::vector<std::vector<int>> arr;
	int val = 0;
	arr.resize(n);
	for (int i = 0; i < n; i++) {
		arr[i].resize(n);
		for (int j = 0; j < n; j++) {
			val++;
			arr[i][j] = val;
		}
	}



	int size = arr.size();
	int col = size - 1;
	double l_to_r = 0, r_to_l=0;
	//here we consider row as for loop index
	for (int i = 0; i < size; i++) {
		l_to_r += arr[i][i];
		r_to_l += arr[i][col];
		col--;
	}

	std::cout << abs(l_to_r - r_to_l);
	return 0;
}