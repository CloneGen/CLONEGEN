int a [100];

void f () {
    int i, t = 0;
    for (i = 0; i < 100; i++) {
        a[i] = a[i] * 2 + t;
        t = a[i] / 10;
        a[i] = a[i] % 10;
    }
}

int main () {
    int N, i, j;
    memset (a, 0, sizeof (a));
    a[0] = 1;
    cin >> N;
    for (i = 0; i < N; i++) {
        f ();
    }
    i = 99;
    while (a[i] == 0)
        i--;
    for (j = i; j >= 0; j--)
        cout << a[j];
    cout << endl;
    return 0;
}

