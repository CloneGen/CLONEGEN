int main () {
    char a [100] [105];
    int i = 0;
    while (1) {
        cin >> a[i];
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

