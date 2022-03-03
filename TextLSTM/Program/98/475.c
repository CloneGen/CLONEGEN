int main () {
    int n, m;
    cin >> n;
    char a [50], *p = a;
    for (int i = 0, num = 0;
    i < n; i++) {
        cin >> a;
        m = strlen (a);
        if (num == 0) {
            for (int j = 0;
            j < m; j++) {
                cout << *(p + j);
            }
            num += m;
        }
        else if (num + m + 1 <= 80) {
            cout << ' ';
            for (int j = 0;
            j < m; j++) {
                cout << *(p + j);
            }
            num += m + 1;
        }
        else {
            cout << endl;
            for (int j = 0;
            j < m; j++) {
                cout << *(p + j);
            }
            num = m;
        }
    }
    return 0;
}

