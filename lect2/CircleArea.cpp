#include <iostream>

int main(void) {
  using namespace std;
  constexpr double PI{3.141592};

  cout << "지름 입력하세요";
  double rad;
  cin >> rad;
  double area = rad * rad * PI;

  cout << "원넓이는" << area;
  return 0;
}
