# 함수 포인터를 매개변수로 활용

```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Add(int a, int b);
int Sub(int a, int b);
void calculate(int a, int b, int(*A)(int, int));

int main(void){
    calculate(10, 5, Add);
    calculate(10, 5, Sub);

    return 0;
}

void calculate(int a, int b, int (*A)(int, int)) {
    printf("결과: %d\n", A(a, b));
}

int Add(int a, int b){
    return a + b;
}

int Sub(int a, int b){
    return a - b;
}
```

## 설명

### 1. 함수 포인터 매개변수

```c
void calculate(int a, int b, int (*A)(int, int))
```

* `A`는 **함수 포인터**이다.
* `int`형 매개변수 2개를 받고 `int`형을 반환하는 함수를 가리킬 수 있다.

### 2. 함수 전달

```c
calculate(10, 5, Add);
calculate(10, 5, Sub);
```

* `Add`를 전달하면 `A`가 `Add` 함수를 가리킨다.
* `Sub`를 전달하면 `A`가 `Sub` 함수를 가리킨다.

### 3. 함수 포인터로 함수 호출

```c
A(a, b)
```

`A`가 가리키고 있는 함수를 호출한다.

따라서 결과는 다음과 같다.

```text
결과: 15
결과: 5
```

### 핵심

> **함수 포인터를 매개변수로 사용하면 하나의 함수에서 전달받은 함수에 따라 서로 다른 작업을 수행할 수 있다.**

