int main() {
    int i;

    // break 문 테스트
    for (i = 0; i < 10; i++) {
        if (i == 5) {
            break; // i가 5가 되면 루프를 종료
        }
        printf("i = %d\n", i);
    }

    // continue 문 테스트
    for (i = 0; i < 10; i++) {
        if (i == 5) {
            continue; // i가 5가 되면 아래 코드 건너뛰고 다음 반복
        }
        printf("i = %d\n", i);
    }

}
