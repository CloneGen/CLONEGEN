int main () {
    char a [100];
    int i = 0, r, j = 0, b [100] = {0};
    cin >> a;
    for (r = 0; a[r] != 0; r++) {
        b[r] = (i * 10 + a[r] - '0') / 13;
        i = ((i * 10) + a[r] - '0') % 13;
    }
    if (r == 1 || (r == 2 && b[1] == 0))
        cout << b[0];
    else {
        while (b[j] == 0)
            j++;
        for (; j < r; j++)
            cout << b[j];
    }
    cout << endl;
    cout << i << endl;
    return 0;
}

