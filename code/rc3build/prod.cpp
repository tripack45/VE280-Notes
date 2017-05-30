int reduce(int number[], int size) {
    int prod = 1;
    while (--size) prod *= number[size];
    return prod;
}