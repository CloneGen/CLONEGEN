int main () {
    int i = 0;
    char a [100] [100];
    for (;;) {
        char c [100];
        cin >> c;
        for (int j = 0;
        j < 100; j++)
            a[i][j] = c[j];
        i++;
        if (cin.get () == '\n')
            break;
    }
    for (int j = i - 1;
    j > 0; j--)
        cout << a[j] << " ";
    cout << a[0];
    return 0;
}

