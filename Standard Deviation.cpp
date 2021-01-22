#include<iostream>
#include<iomanip>
#include<cmath>
int maina12() {
	int n;
	std::cin >> n;
	int* val = new int[n];
	double sum = 0;
	for (int i = 0; i < n; i++) {
		std::cin >> val[i];
		sum += val[i];
	}
	
	sum = sum/n;
	double value = 0;
	for (int i = 0; i < n; i++) {
		double v = abs(val[i] - sum);
		value += v * v;
	}
	value = value / n;
	std::cout << std::setprecision(1) << std::fixed << sqrt(value);
	return 0;
}