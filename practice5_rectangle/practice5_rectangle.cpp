// practice5_rectangle.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

class Rectangle {
public:
	int width;
	int height;
	int getArea();
};
int Rectangle::getArea() {
	return width * height;
}

int main()
{
	Rectangle rect;
	rect.width = 3;
	rect.height = 5;
	cout << "네모의 넓이는 : " << rect.getArea() << endl;
}
