int main () {
    int n, i, sum = 0;
    scanf ("%d", &n);
    for (i = 1; i <= n; i++) {
        if (i % 7 != 0 && (i - ((int) (i / 10)) * 10) != 7 && i != 71 && i != 73 && i != 74 && i != 75 && i != 76 && i != 78 && i != 79 && i != 72) {
            sum += i * i;
        }
    }
    printf ("%d", sum);
    return 0;
}

