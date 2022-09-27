#include <iostream>

double Circle_area(int r)
{
    return 3.14 * r * r;
}

int main()
{
    int n = 8;
    std::cout << "n + 9 = " << n + 9 << "\n";
    std::cout << "원의 넓이는 = " << Circle_area(n);
}
