#include <iostream>
using namespace std; // 이거 쓰면 std:: 쓸 필요 없음

// Circle 이라는 원의 넓이 (면적) 를 구하는 클래스를 만든다

class Circle {
public:
	int radius;				// radius 는 정수를 받는다
	double getArea();		// 자료형 double로 하는 getArea() 라는 객체를 생성한다
};
double Circle::getArea() {			// Circle의 getArea() 객체를 정의해준다
	return 3.14 * radius * radius;	// Circle의 return 값은 3.14 * radius * radius 이다
}

int main()
{
	Circle Playground;
	Playground.radius = 1;
	double area = Playground.getArea();
	cout << "Playground 면적은 : " << area << endl;

	Circle University;
	University.radius = 60;
	area = University.getArea();
	cout << "University 면적은" << area << endl;

	return 0;
}
