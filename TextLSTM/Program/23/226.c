int main () {
    int i, j, k;
    char a [100] [100], b [10000];
    cin.getline (b, 10000);
    for (i = 0, j = 0, k = 0; i < strlen (b); ++i) {
        if (b[i] == ' ') {
            ++j;
            k = 0;
            continue;
        }
        else {
            a[j][k] = b[i];
            ++k;
        }
    }
    cout << a[j];
    for (i = j - 1; i >= 0; --i) {
        cout << ' ' << a[i];
    }
    return 0;
}

