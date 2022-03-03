void huiwen (char a []) {
    int i, j, n, sum;
    for (n = 2; n <= strlen (a); n++) {
        for (j = 0; j <= strlen (a) - n; j++) {
            sum = n + 2 * j - 1;
            for (i = j; i <= j + n / 2; i++) {
                if (a[i] != a[sum - i])
                    break;
            }
            if (i == j + n / 2 + 1) {
                for (i = j; i <= n + j - 1; i++)
                    cout << a[i];
                cout << endl;
            }
        }
    }
}

int main () {
    char str [501];
    cin >> str;
    huiwen (str);
    return 0;
}

