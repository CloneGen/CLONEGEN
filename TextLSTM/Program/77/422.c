void zifu (char a []) {
    int i, j;
    for (i = 1; i < strlen (a); i++) {
        if (a[i] != a[0]) {
            for (j = i - 1; a[j] != a[0]; j--) {
                a[j] = a[i];
            }
            cout << j << " " << i << endl;
            a[j] = a[i];
        }
    }
    return;
}

int main () {
    char a [10000];
    int i;
    cin >> a;
    zifu (a);
    return 0;
}

