int main () {
    int n, i, j, k, num [510] = {0}, max = 1;
    char str [510], put [510] [8];
    cin >> n;
    cin.get ();
    cin.getline (str, 510);
    int len = strlen (str);
    for (i = 0; i <= len - n; i++) {
        k = 0;
        for (j = i; j < i + n; j++) {
            put[i][k] = str[j];
            k++;
        }
        put[i][k] = '\0';
    }
    for (i = 0; i <= len - n; i++) {
        for (j = i; j <= len - n; j++) {
            if (strcmp (put[i], put[j]) == 0) {
                num[i]++;
            }
        }
    }
    for (i = 0; i < len - n; i++) {
        if (num[i] > max)
            max = num[i];
    }
    if (max == 1)
        cout << "NO" << endl;
    else {
        cout << max << endl;
        for (i = 0; i < len - n; i++) {
            if (num[i] == max) {
                cout << put[i] << endl;
            }
        }
    }
    return 0;
}

