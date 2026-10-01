#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int score[3][3];
	int allscore[3];
	int max = 0;
	int high = 0;
	for (int i = 0;i < 3;i++) {
		printf("%d번째 학생의 국어, 영어, 수학 성적을 입력: ", i+1);
		int sum = 0;
		for (int j = 0;j < 3;j++) {
			scanf("%d", &score[i][j]);
			sum += score[i][j];
		}
		allscore[i] = sum;
	}
	high = allscore[0];
	max = 0;
	for (int k = 1;k < 3;k++) {
		if (high < allscore[k]) {
			high = allscore[k];
			max = k;
		}
	}
	printf("최우수 학생은 %d번째 학생이고 평균점수는 %d점이다.", max+1, high/3);
}
