int main () {
    int n, sum;
    cin >> n;
    sum = 0;
    for (int i = 1;
    i <= n; i++) {
        if (i % 7 != 0 && i % 10 != 7 && (i % 70 >= 10 || i <= 10))
            sum = sum + i * i;
    }
    cout << sum << endl;
    return 0;
}

