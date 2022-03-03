int main () {
    char a [100] [20];
    int j = 0, k = 0;
    char *i;
    while (cin >> a[j++])
        ;
    do {
        cout << a[k++] << " ";
        i = &a[k - 1][0];
    }
    while (i != &a[j - 3][0]);
    cout << a[j - 2];
    return 0;
}

