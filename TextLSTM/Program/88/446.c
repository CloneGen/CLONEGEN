int main () {
    char a [31];
    int i, n, j = 0;
    cin.getline (a, 31);
    n = strlen (a);
    char *p [30];
    for (i = 0; i < n; i++) {
        if (a[i] < '0' || a[i] > '9') {
            a[i] = 0;
            if (i < n - 1 && a[i + 1] >= '0' && a[i + 1] <= '9') {
                p[j] = a + i + 1;
                j++;
            }
        }
    }
    if (a[0])
        cout << a << endl;
    for (i = 0; i < j; i++)
        cout << p[i] << endl;
    return 0;
}

