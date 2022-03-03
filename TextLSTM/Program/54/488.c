int i = 0, m = 0, k = 0;

int amnt (int a) {
    if (a % (m - 1) == 0 && i < m) {
        i++;
        return amnt (a / (m - 1) * m + k);
    }
    else if (i == m) {
        return a;
    }
    else
        return 0;
}

int main () {
    int n = 0, j = 1, b = 0;
    cin >> m >> k;
    while (b != 1) {
        n = amnt (j);
        if (n != 0) {
            cout << n;
            b = 1;
        }
        j++;
        i = 0;
    }
    return 0;
}

