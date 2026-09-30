void get_data(int data[]);
int max(int data[]);
int main(void) {
    int i, data[5];
    get_data(data);

    for (i = 0; i < 5;i++) {
        printf("%d번째 data:%d\n", i + 1, data[i]);
    }
    
    printf("최댓값: %d", max(data));
    return 0;
}
int max(int data[]) {
    int max = data[0];
    for (int i = 0;i < 5;i++) {
        if (data[i] > max) {
            max = data[i];
        }
    }
    return max;
}
void get_data(int data[])
{
    int i;
    for (i = 0; i < 5; i++){
        printf("%d번째 정수 입력: ", i + 1);
        scanf("%d", &data[i]);
    }
}
