int main() {
    int arr[5];
    arr[0]=10;
    arr[1]=20;
    arr[2]=30;
    arr[3]=40;
    arr[4]=50;
	
    int *ptr;
    ptr = arr;

    // 포인터 덧셈
    printf("ptr = %p, *ptr = %d\n", ptr, *ptr);
    ptr++;
    printf("After ptr++, ptr = %p, *ptr = %d\n", ptr, *ptr);

    // 포인터 뺄셈
    ptr--;
    printf("After ptr--, ptr = %p, *ptr = %d\n", ptr, *ptr);

}

