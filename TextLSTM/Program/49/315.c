int main () {
    int n, i, j, k, t;
    int flag;
    char a [502];
    char p;
    i = 1;
    while (cin.get (p) && p != '\n') {
        a[i] = p;
        n = i;
        i++;
    }
    for (i = 2; i <= n; i++)
        for (j = 1; j <= n + 1 - i; j++) {
            for (k = 0; k <= i - 1; k++) {
                if (a[j + k] == a[j + i - 1 - k])
                    flag = 1;
                else {
                    flag = 0;
                    break;
                }
            }
            if (flag == 1) {
                for (t = j; t <= j + i - 2; t++)
                    cout << a[t];
                cout << a[j + i - 1] << endl;
            }
        }
    return 0;
}

