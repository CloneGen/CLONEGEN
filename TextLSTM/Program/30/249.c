int main () {
    int n, i, j, number = 0, sum = 0;
    cin >> n;
    for (j = 0; number <= n; j++)
        for (i = 0;; i++) {
            if (i == 10)
                break;
            number = j * 10 + i;
            if (number > n)
                break;
            if (number % 7 == 0 || i == 7 || j == 7)
                continue;
            sum += number * number;
        }
    cout << sum << endl;
    return 0;
}

