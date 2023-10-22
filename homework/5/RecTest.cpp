//////////////////////////////////////////////////////
//   C++ 프로그래밍                                 //
//   대전충남지역대학 화상강의(ZOOM14)              //
//   학번: 202334-154302                            //
//   이름: 이준호                                   //
//////////////////////////////////////////////////////

#include <iostream>
using namespace std;

int main() {
  int a = 10, b = 20;

  int &aRef = a;  // a를 참조하는 참조 변수 aRef를 선언
  cout << "a의 값 : " << a << endl;
  cout << "aRef가 참조하는 값 : " << aRef << endl << endl;
  aRef = 100;
  cout << "a의 값 : " << a << endl;
  aRef = b;
  cout << "a의 값 : " << a << endl;
  return 0;
}
