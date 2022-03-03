int main () {
    int n, i, j, count, num = 1;
    int a [1000] = {0};
    int b [1000] = {0};
    char sp;
    for (i = 0;; i++) {
        cin >> a[i];
        sp = getchar ();
        if (sp == '\n')
            break;
    }
    n = i + 1;
    for (i = 0; i < n; i++) {
        cin >> b[i];
        sp = getchar ();
        if (sp == '\n')
            break;
    }
    for (i = 1; i < 1002; i++) {
        count = 0;
        for (j = 0; j < n; j++) {
            if (i >= a[j] && i < b[j])
                count = count++;
        }
        num = (count > num ? count : num);
    }
    cout << n << " " << num;
    return 0;
}

