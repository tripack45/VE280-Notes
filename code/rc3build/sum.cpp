int reduce(int number[], int size) {
    int sum = 0; 
    while (--size) sum += number[size];
    return sum;
}