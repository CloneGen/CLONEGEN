int main () {
    int n, k, m, num, c = 0;
    cin >> n >> k;
    for (int i = 1;
    ; i++) {
        num = n * i + k;
        for (int j = 1;
        j < n; j++) {
            if ((num * n) % (n - 1) != 0)
                break;
            else {
                num = num * n / (n - 1) + k;
                if (j == n - 1) {
                    cout << num << endl;
                    c = c + 1;
                    break;
                }
            }
        }
        if (c == 1)
            break;
    }
    return 0;
}

