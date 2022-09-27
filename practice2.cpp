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
    const char * c = "안녕하세요";
    char name[size];
    char age[size];

    std::cout << A::num << '\n';// endl 끝? endline?
    std::cout << B::num << '\n';
    std::cout << "main num : " << num << "\n\n";
    std::cout << "인사할게요 : " << c << "\n\n";
    std::cout << "이름을 써주세요 : ";
    std::cin >> name;
    std::cout << "나이를 써주세요 : ";
    std::cin >> age;

    std::cout << "제 이름은 " << name << " 이고 " << age << "살 입니다" << "\n\n";
    
    return 0;
}