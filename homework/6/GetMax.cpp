//////////////////////////////////////////////////////
//   C++ 프로그래밍                                 //
//   대전충남지역대학 화상강의(ZOOM14)              //
//   학번: 202334-154302                            //
//   이름: 이준호                                   //
//////////////////////////////////////////////////////

#include <iostream>
using namespace std;

int getMax(const int *arr, const int len)  // 함수 머리부
{
  int max = INT_MIN;  // int형의 최솟값을 max로 가정함
  for (int i = 0; i < len; i++)
    if (max < arr[i]) max = arr[i];

  return max;  // 결과의 반환
}

int main() {
  int data[10] = {10, 23, 5, 9, 22, 48, 12, 10, 55, 31};

  cout << "데이터 : ";
  for (int i = 0; i < 10; i++) cout << data[i] << "  ";
  cout << endl << endl;
  cout << "최댓값 = " << getMax(data, 10) << endl;

  return 0;
}
