void move (int *, int, int);

int main () {
    int n, m, num [100];
    cin >> n >> m;
    for (int i = 0;
    i < n; i++)
        cin >> num[i];
    move (num, n, m);
    cout << num[0];
    for (int i = 1;
    i < n; i++)
        cout << ' ' << num[i];
    return 0;
}

void move (int *num, int n, int m) {
    int i = 0;
    int key = *(num + i);
    while (i != m) {
        if (i < m) {
            *(num + i) = *(num + i + n - m);
            i = i + n - m;
        }
        else {
            *(num + i) = *(num + i - m);
            i = i - m;
        }
    }
    *(num + i) = key;
}

