int main () {
    int n, sum;
    sum = 0;
    cin >> n;
    for (int i = 1;
    i <= n; i++) {
        if (i % 7 != 0) {
            if (i % 10 != 7) {
                int x = i / 10;
                if (x != 7)
                    sum = sum + i * i;
            }
        }
    }
    cout << sum << endl;
    return 0;
}

