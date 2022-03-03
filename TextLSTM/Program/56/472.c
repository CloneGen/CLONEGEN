int main () {
    int num;
    scanf ("%d", &num);
    for (num = num; num > 9; num /= 10) {
        printf ("%d", num % 10);
    }
    printf ("%d", num);
    return 0;
}

