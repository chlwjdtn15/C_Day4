#include <stdio.h>

void func3() {
  printf("안녕하세요!!\n");
}

void func1() {
  printf("프로그램을 만들어보아요.\n");
}

void func2() {
  printf("c언어를 통해\n");
}

void func4() {
  printf("저는 차태진입니다.\n");
}


void hi() {
  printf("안녕하세요. 저는 홍길동입니다. 잘부탁드립니다\n");
}

int main(void) {

  // 위 함수를 올바르게 호출해서 아래처럼 출력되게 해주세요.

  // 안녕하세요!! 
  // 저는 차태진입니다.
  // c언어를 통해
  // 프로그램을 만들어보아요.



  func3();
  func4();
  func2();
  func1();




  // 함수를 만들어 아래가 실행되도록 해주세요.
  // 출력 : 안녕하세요. 저는 홍길동입니다. 잘 부탁드립니다.
  hi();
  
  return 0;
}