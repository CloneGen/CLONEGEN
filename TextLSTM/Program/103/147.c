int main () {
    char a [1000] = {0};
    cin >> a;
    int num [27] = {0};
    int len = strlen (a);
    int i = 0, j = 0;
    for (i = 0; i < len; i++)
        if (a[i] >= 'a')
            a[i] -= ('a' - 'A');
    for (i = 0; i < len; i++) {
        num[a[i] - 'A']++;
        for (j = i + 1; j < len; j++) {
            if (a[j] == a[i])
                num[a[i] - 'A']++;
            else
                break;
        }
        cout << '(' << a[i] << ',' << num[a[i] - 'A'] << ')';
        num[a[i] - 'A'] = 0;
        i = j - 1;
    }
    cout << endl;
    return 0;
}

