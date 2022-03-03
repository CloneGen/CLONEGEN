int g_a = 0;

int main () {
    int n = 0;
    int a [100];
    int i = 0;
    int j = 0;
    int flag = 0;
    memset (a, 0, sizeof (a));
    cin >> n;
    a[99] = 1;
    for (i = 1; i <= n; i++)
        for (j = 99; j >= 50; j--) {
            if ((a[j] * 2 > 8) && (g_a == 1))
                a[j] = a[j] * 2 - 9;
            else if ((a[j] * 2 > 8) && (g_a == 0))
                a[j] = a[j] * 2 - 10 + g_a++;
            else if ((a[j] * 2 <= 8) && (g_a == 1))
                a[j] = a[j] * 2 + g_a--;
            else if ((a[j] * 2 <= 8) && (g_a == 0))
                a[j] = a[j] * 2;
        }
    for (i = 1; i <= 99; i++) {
        if ((a[i] == 0) && (flag == 0))
            continue;
        else {
            cout << a[i];
            flag = 1;
        }
    }
    return 0;
}

