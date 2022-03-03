int f [100];

void sort (char str [], int f [], int l, int k, char m) {
    if (k == l)
        return;
    int i;
    if (str[k] != m && f[k] == 1) {
        for (i = k - 1; i >= 0; i--)
            if (str[i] == m && f[i] == 1) {
                cout << i << " " << k << endl;
                f[i] = 0;
                f[k] = 0;
                break;
            }
    }
    sort (str, f, l, k + 1, m);
}

int main () {
    char str [101], m;
    int l, i = 0, k;
    cin.getline (str, 101);
    l = strlen (str);
    m = str[0];
    for (i = 0; i < l; i++)
        f[i] = 1;
    i = 0;
    while (str[i] == m)
        i++;
    k = i;
    sort (str, f, l, k, m);
    return 0;
}

