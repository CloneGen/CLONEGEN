int main () {
    int n;
    cin >> n;
    const  int n1 = n;
    int a [n1], t1;
    for (t1 = 0; t1 < n1; ++t1)
        cin >> a[t1];
    for (t1 = n1 - 1; t1 >= 0; --t1) {
        if (t1 == (n1 - 1))
            cout << a[t1];
        else
            cout << " " << a[t1];
    }
    return 0;
}

