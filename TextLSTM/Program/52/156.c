void move (int *p, int m, int n) {
    int a;
    a = *(p + m - 1);
    for (int i = m - 1;
    i > 0; i--) {
        *(p + i) = *(p + i - 1);
    }
    *p = a;
}

int main () {
    int a, b;
    cin >> a >> b;
    const  int a1 = a;
    int num [a1];
    for (int j = 0;
    j < a; j++) {
        cin >> num[j];
    }
    while (b > 0) {
        move (&num[0], a, b);
        b--;
    }
    cout << num[0];
    for (int j = 1;
    j < a; j++) {
        cout << " " << num[j];
    }
    return 0;
}

