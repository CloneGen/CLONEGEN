int main () {
    int n;
    cin >> n;
    int a [20] = {0};
    a[0] = 1;
    a[1] = 1;
    int i = 2;
    int c = 1, d = 1;
    do {
        a[i] = c + d;
        c = d;
        d = a[i];
        i++;
    }
    while (i < 20);
    int b [20] = {-1};
    int istep = 0;
    do {
        cin >> b[istep];
        istep++;
    }
    while (istep < n);
    int m = 0;
    do {
        int e = b[m] - 1;
        cout << a[e] << endl;
        m++;
    }
    while (m < n);
    return 0;
}

