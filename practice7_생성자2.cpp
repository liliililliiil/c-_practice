// practice7_생성자2.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

class Rectangle {
public:
	int width, height;
	Rectangle();
	Rectangle(int w, int h);
	Rectangle(int length);
	bool isSquare();
};

Rectangle::Rectangle() {
	width = height = 3;
}

Rectangle::Rectangle(int w, int h) {
	width = w;
	height = h;
}
Rectangle::Rectangle(int length) {
	width = height = length;
}
bool Rectangle::isSquare() {
	if (width == height) return true;
	else return false;
}

int main()
{
	Rectangle rect1;
	Rectangle rect2(3, 5);
	Rectangle rect3(3);

	if (rect1.isSquare()) cout << "rect1은 정사각형이다" << endl;
	if (rect2.isSquare()) cout << "rect2은 정사각형이다" << endl;
	if (rect3.isSquare()) cout << "rect3은 정사각형이다" << endl;
}
