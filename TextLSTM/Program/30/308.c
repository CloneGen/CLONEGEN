int main () {
    int i = 0, sum = 0, n;
    cin >> n;
    while (i < n) {
        i = i + 1;
        if (i % 7 == 0 || ((0 <= (i - 70)) && ((i - 70) <= 9)) || ((i - floor (i / 10) * 10) == 7)) {
            continue;
        }
        sum = sum + i * i;
    }
    cout << sum << endl;
    return 0;
}

