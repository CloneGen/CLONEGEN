int flag = 0;

int main () {
    void fun (int, int, int);
    int i, t, m, n;
    cin >> t;
    for (i = 1; i <= t; i++) {
        flag = 0;
        cin >> m >> n;
        fun (m, n, 0);
        cout << flag << endl;
    }
    return 0;
}

void fun (int m, int n, int before) {
    int i;
    if (n == 1 && m >= before) {
        flag++;
        return;
    }
    for (i = before; i <= m - n + 1; i++) {
        fun (m - i, n - 1, i);
    }
}

