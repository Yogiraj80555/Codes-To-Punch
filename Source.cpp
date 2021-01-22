#include <iostream>
#include <iomanip>
using namespace std;

// Complete the solve function below.
void solve(double meal_cost, int tip_percent, int tax_percent) {
    double cost = meal_cost * tip_percent / 100;
    cost += meal_cost * tax_percent / 100;
    std::cout <<std::fixed<<std::setprecision(0) <<cost+meal_cost;
}

int main()
{
    double meal_cost = 12.00;
   

    int tip_percent = 20;
    

    int tax_percent = 8;
    

    solve(meal_cost, tip_percent, tax_percent);

    return 0;
}
