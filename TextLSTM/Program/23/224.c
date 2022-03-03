int main () {
    int n, i, j, k, blen;
    char b [1000], a [100] [100];
    cin.getline (b, 1000);
    blen = strlen (b);
    for (i = 0, j = 0, k = 0; i < blen; ++i) {
        if (b[i] != ' ') {
            a[j][k] = b[i];
            ++k;
        }
        else if (b[i] == ' ' && b[i + 1] == ' ')
            continue;
        else {
            ++j;
            k = 0;
            continue;
        }
    }
    n = j;
    cout << a[n];
    for (i = n - 1; i >= 0; --i) {
        cout << ' ' << a[i];
    }
    return 0;
}

