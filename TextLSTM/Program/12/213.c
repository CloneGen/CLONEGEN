int main () {
    int a [20];
    int i;
    int n = 0;
    int num = 0;
    int j;
    while (1) {
        n = 0;
        num = 0;
        for (i = 0; i < 20; i++) {
            cin >> a[i];
            if (a[i] == 0)
                break;
            if (a[i] == -1)
                return 0;
            n++;
        }
        for (i = 0; i < n; i++)
            for (j = i + 1; j < n; j++)
                if (a[i] == 2 * a[j] || 2 * a[i] == a[j])
                    num++;
        cout << num << endl;
    }
    return 0;
}

