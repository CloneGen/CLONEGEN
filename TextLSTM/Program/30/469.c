int main () {
    int i, sum, n;
    cin >> n;
    sum = 0;
    for (i = 1; i <= n; i++) {
        if (i % 7 != 0)
            if ((i - 7) % 10 != 0)
                if (i - 70 < 0 || i - 70 >= 10)
                    sum = sum + i * i;
    }
    cout << sum << endl;
    return 0;
}

