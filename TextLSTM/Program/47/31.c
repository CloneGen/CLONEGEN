void swap (int *a, int *b) {
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main () {
    int n;
    cin >> n;
    int num [n + 10];
    for (int i = 0;
    i < n; i++) {
        cin >> *(num + i);
    }
    for (int i = 0, j = n - 1;
    i < j; i++, j--) {
        swap (num + i, num + j);
    }
    for (int i = 0;
    i < n - 1; i++) {
        cout << *(num + i) << ' ';
    }
    cout << *(num + n - 1) << endl;
    return 0;
}

