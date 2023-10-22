//////////////////////////////////////////////////////
//   C++ 프로그래밍                                 //
//   대전충남지역대학 화상강의(ZOOM14)              //
//   학번: 202334-154302                            //
//   이름: 이준호                                   //
//////////////////////////////////////////////////////

#include <iostream>
using namespace std;

const float PI = 3.14159265f;
struct Circle {
  float radius, cx, cy;
};

struct Rectangle {
  float x1, y1;  // 좌측 하단의 꼭짓점 좌표
  float x2, y2;  // 우측 상단의 꼭짓점 좌표
};

// 도형의 데이터 입력
// Circle
void inputData(Circle &c)  // 함수 머리부
{
  cout << "원의 반지름 : ";
  cin >> c.radius;
  cout << "중심좌표(x) : ";
  cin >> c.cx;
  cout << "중심좌표(y) : ";
  cin >> c.cy;
}
// Rectangle
void inputData(Rectangle &r)  // 함수 머리부
{
  cout << "직사각형 좌측 하단의 꼭짓점(x) : ";
  cin >> r.x1;
  cout << "직사각형 좌측 하단의 꼭짓점(y) : ";
  cin >> r.y1;
  cout << "직사각형 우측 상단의 꼭짓점(x) : ";
  cin >> r.x2;
  cout << "직사각형 우측 상단의 꼭짓점(y) : ";
  cin >> r.y2;
}

// 도형의 데이터 출력
// Circle
void prData(const Circle &c)  // 함수 머리부
{
  cout << "반지름 = " << c.radius << endl;
  cout << "중심좌표 = (" << c.cx;
  cout << ", " << c.cy << ")" << endl;
}
// Rectangle
void prData(const Rectangle &r)  // 함수 머리부
{
  cout << "좌측 하단 꼭짓점 = ";
  cout << "(" << r.x1 << ", " << r.y1 << ")" << endl;
  cout << "우측 상단 꼭짓점 = ";
  cout << "(" << r.x2 << ", " << r.y2 << ")" << endl;
  cout << "높이 = " << r.y2 - r.y1 << endl;
  cout << "너비 = " << r.x2 - r.x1 << endl;
}

float area(const Circle &c) { return PI * c.radius * c.radius; }
float area(const Rectangle &r) { return (r.y2 - r.y1) * (r.x2 - r.x1); }

int main() {
  // 원
  Circle circle = {1, 2, 3};
  cout << "<<원의 면적 구하기>>" << endl;
  inputData(circle);
  cout << "입력된 도형의 정보" << endl;
  prData(circle);
  cout << "도형의 면적 = " << area(circle) << endl;

  // 직사각형
  Rectangle rectangle = {0, 0, 0, 0};
  cout << "<<직사각형의 면적 구하기>>" << endl;
  inputData(rectangle);
  cout << "입력된 도형의 정보" << endl;
  prData(rectangle);
  cout << "도형의 면적 = " << area(rectangle) << endl;

  return 0;
}
