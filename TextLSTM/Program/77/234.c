void Output (char a [100], int k, int b [100]) {
    int i = 0, j;
    if (k == 0)
        return;
    else {
        while (a[i] == a[0])
            i++;
        cout << b[i - 1] << " " << b[i] << endl;
        for (j = i - 1; j < k - 2; j++) {
            a[j] = a[j + 2];
            b[j] = b[j + 2];
        }
        Output (a, k - 2, b);
    }
}

int main () {
    int i, len, b [100];
    char a [100];
    cin >> a;
    len = strlen (a);
    for (i = 0; i < len; i++)
        b[i] = i;
    Output (a, len, b);
    return 0;
}

