int main () {
    char s [100] [100] = {0};
    int sum = 0;
    while (true) {
        cin >> s[sum];
        sum++;
        if (cin.get () == '\n')
            break;
    }
    char a [100] = {0};
    char b [100] = {0};
    cin >> a >> b;
    for (int i = 0;
    i < sum; i++)
        for (int j = 0;
        j < 100; j++) {
            if (s[i][j] != a[j])
                break;
            if (j == 99)
                strcpy (s[i], b);
        }
    for (int l = 0;
    l < sum - 1; l++)
        cout << s[l] << " ";
    cout << s[sum - 1];
    return 0;
}

