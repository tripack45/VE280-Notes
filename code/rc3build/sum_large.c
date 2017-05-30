int _Z6reducePii(int* number, int size) {
    int sum = 0;
    while (--size) 
        if (number[size] > 3) sum += number[size];
    return sum;
}