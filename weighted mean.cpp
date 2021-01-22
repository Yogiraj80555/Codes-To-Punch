#include<iostream>
#include<iomanip>

int mains1() {
	int n;
	std::cin >> n;
	int* val = new int[n];
	double w_sum = 0;
	double val_sum = 0;
	for (int i = 0; i < n; i++) {
		std::cin >> val[i];
	}
	for (int i = 0; i < n; i++) {
		int weight;
		std::cin >> weight;
		w_sum += weight;
		val_sum += val[i] * weight;
	}
	
	std::cout << std::setprecision(1)<<std::fixed<< val_sum / w_sum;

	return 0;
}