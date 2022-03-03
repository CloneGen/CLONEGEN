int num0;

int factor (int x, int y) {
    int countn = 1;
    if (x == 1)
        return 0;
    if (x == 2)
        return 1;
    for (int i = y;
    i <= sqrt (x); i++)
        if (x % i == 0)
            countn += factor (x / i, i);
    return countn;
}

int main () {
    int n, j;
    cin >> n;
    for (j = 1; j <= n; j++) {
        cin >> num0;
        cout << factor (num0, 2) << endl;
    }
    return 0;
}

