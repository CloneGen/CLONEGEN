int main () {
    char a [100], b, c;
    cin.getline (a, 100);
    b = a[0];
    int i, j, l;
    l = strlen (a);
    for (i = 1; i < l; i++)
        if (a[i] != a[0]) {
            c = a[i];
            break;
        }
    for (i = 0; i < l; i++) {
        if (a[i] == c) {
            a[i] = '0';
            for (j = i; j >= 0; j--) {
                if (a[j] == b) {
                    cout << j << " " << i << endl;
                    a[j] = '0';
                    break;
                }
            }
        }
    }
    return 0;
}

