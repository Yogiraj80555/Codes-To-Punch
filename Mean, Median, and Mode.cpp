#include<iostream>
#include<map>
#include<algorithm>

int mains11() {
	int n;
	std::cin >> n;

	//for median
	bool flag = 0;
	int median = n / 2;
	float addMedian = 0;
	if (n % 2 == 0) {
		flag = 1;
	}



	int* arr = new int[n];
	std::map<int, int> m;
	float sum=0,small;
	short int ocrs = 0;
	for (int i = 0; i < n; i++) {
		int val;
		std::cin >> val;
		arr[i] = val;
		sum += val;

		//adding key in map
		if (m.find(val) == m.end()) {
			m[val] = 1;
		}
		else {
			int ocr = m[val];
			ocr++;
			m[val] = ocr;
		}

		//for finding Mode
		if (m[val] > ocrs) {
			ocrs = m[val];
			small = val;
		}
		else if (m[val] == ocrs && small > val) {
			small = val;
		}

		
	}

	std::sort(arr, arr + n);

	//for median
	if (flag) {
		addMedian = arr[median - 1] + arr[median];
	}
	else{
		addMedian = arr[median];
	}


	std::cout << sum / n<<std::endl;
	std::cout << addMedian / 2 << std::endl;
	std::cout << small;

	return 0;
 }