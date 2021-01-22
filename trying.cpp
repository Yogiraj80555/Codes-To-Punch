#include <iostream>

int main()
{
    int a[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
   
    // size of the array
    int asize = sizeof(a) / sizeof(a[0]);
    std::cout << "The array before sorting is : "<<asize<<" -> "<<sizeof(a)<<"-> "<<sizeof(a[0]);
}