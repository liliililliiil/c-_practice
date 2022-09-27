#include <iostream>

namespace A
{
    int num = 100;
}
namespace B
{
    int num = 200;
}

int main()
{
    int num = 1000;
    const int size = 20;
    const char* c = "안녕하세요";

    std::cout << A::num << '\n';// endl 끝? endline?
    std::cout << B::num << '\n';
    std::cout << "main num : " << num << "\n\n";
    std::cout << "인사할게요 : " << c << "\n\n";

    return 0;
}