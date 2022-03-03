int main () {
    char a [100];
    int i, j, k, n;
    cin.get (a, 100, '\n');
    n = strlen (a);
    for (i = 0; i < n; i++) {
        if (a[i] == ' ') {
            for (j = 1;; j++)
                if (a[j + i] != ' ')
                    break;
            for (k = i; k < n; k++)
                a[k + 1] = a[k + j];
        }
    }
    cout << a;
    return 0;
}

