// practice6_생성자.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;		// 이거 쓰면 std:: 안써도됨

class Circle {				// Circle 클래스 정의
public:						
	int radius;				// radius 정수
	Circle();				// Circle 안에 Circle() 객체
	Circle(int r);			// Circle 안에 Circle(int r) 객체
	double getArea();		// getArea() 의 자료형 double
};
Circle::Circle() {			// Circle() 객체 정의
	radius = 1;				// Circle() 객체에서 radius 디폴트
	cout << "반지름 : " << radius << " 원" << endl;		// 정해진 값을 출력
}

Circle::Circle(int r) {		// Circle(int r) 객체 정의
	radius = r;				// Circle(int r) 객체에서 radius는 변수 (r)
	cout << "반지름 : " << radius << " 원" << endl;		// r 변수에 따른 출력
	
}
double Circle::getArea() {	// Circle 클래스 안의 getArea() 정의
	return 3.14 * radius * radius;		// 3.14 * r * r 출력
}
int main()
{
	Circle Seoulcyber;		// Seoulcyber라는 이름의 Circle 클래스 생성
	double area = Seoulcyber.getArea();									// 자료형이 double인 area 변수 생성하고 getArea() 로 정의해준다
	cout << "Seoulcyber 면적은 : " << Seoulcyber.getArea() << endl;		// Circle 클래스의 기본값으로 반지름이 1인 원의 넓이 출력

	Circle University(15);	// University라는 이름의 Circle 클래스 생성, ### 클래스 안에 정수가 들어가있다 ###
	area = University.getArea();										// area 라는 변수에 University 클래스의 면적 구하는 객체로 정의 (위에서 double로 자료형 정해져서 수정 x)
	cout << "University 면적은 : " << area << endl;						// University()에 15를 넣어기 때문에 반지름이 15인 원의 넓이를 출력
}