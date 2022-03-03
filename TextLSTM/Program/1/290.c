int factors (int, int, int);

int main () {
    int num, n, i, j, b [10000];
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> num;
        int part = 0;
        int t = num;
        for (j = 2; j <= num; j++) {
            while (t % j == 0) {
                t /= j;
                part++;
            }
        }
        b[i] = factors (1, part, num);
    }
    for (i = 0; i < n; i++) {
        cout << b[i] << endl;
    }
    return 0;
}

int factors (int factor1, int part, int num) {
    int sum = 0;
    if (num < factor1)
        return 0;
    if (part == 1)
        return 1;
    for (int i = factor1;
    i <= num; i++)
        if (num % i == 0)
            sum = sum + factors (i, part - 1, num / i);
    return sum;
}

