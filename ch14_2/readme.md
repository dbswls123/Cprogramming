#실습과제 1

# 과제 1_1. 주소에 의한 호출을 사용해야 하는 3가지 경우

1. **배열을 함수의 인자로 전달할 때**

   * C언어에서는 배열을 함수의 인자로 전달할 때 배열 전체를 복사해서 전달할 수 없기 때문에, **배열의 시작 주소를 전달**하여 함수에서 배열의 원소에 접근한다.
2. **원래 변수의 값을 변경할 때**

   * 지역변수에 있는 값을 **직접적으로 접근하여 값을 변경**하기 위해 주소에 의한 호출을 사용한다.

3. **2개 이상의 값을 반환할 때**

   * C언어의 `return`은 하나의 값만 반환할 수 있으므로, **여러 변수의 주소를 전달하여 여러 결과를 반환**하기 위해 사용한다.

#실습과제 2

## 실행결과 <img width="378" height="263" alt="image" src="https://github.com/user-attachments/assets/9d17d63a-9322-4ba7-b8c1-9af5bb217dd1" />

#실습과제 3
## 실행결과 <img width="710" height="542" alt="image" src="https://github.com/user-attachments/assets/463e0982-b243-476e-9b36-1ebc0d8da0e1" />

#실습과제 4
## 실행결과 <img width="800" height="194" alt="image" src="https://github.com/user-attachments/assets/7cd0e789-253b-4a12-a4d4-135d09b1dedd" />


#실습과제 5
## 문제
* const를 선언함으로써 arr을 통해 배열의 원본 데이터를 변경할 수 없도록 하여 코드의 안정성을 높인 것이다. 따라서 이 함수를 정의한 사람은 arr이 가리키는 데이터의 값을 변경하지 않고, 데이터를 읽어서 출력하는 것만을 의도했음을 알 수 있다.

# 도전과제 

## 15_1번 문제 실행결과 <img width="942" height="600" alt="image" src="https://github.com/user-attachments/assets/7e03f60d-7853-450e-9ea1-1069a2d1a32e" />

## 15_2번 문제 실행결과 <img width="630" height="234" alt="image" src="https://github.com/user-attachments/assets/2dc4eb3f-d94e-40ba-ba8b-4d1b7c6ef82a" />

## 15_5번 문제 실행결과 <img width="698" height="388" alt="image" src="https://github.com/user-attachments/assets/bcb87fb0-f355-4297-80fc-c52cf63d74b0" />



