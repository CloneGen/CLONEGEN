int main () {
    char a [200];
    int i = 0, j, n, start, end;
    cin.getline (a, 200);
    n = strlen (a);
    start = n + 1;
    for (i = n - 1; i >= 0; i--) {
        if (a[i] == ' ') {
            end = start - 1;
            start = i + 1;
            for (j = start; j < end; j++) {
                cout << a[j];
            }
            cout << " ";
        }
    }
    end = start - 1;
    start = 0;
    for (i = 0; i < end; i++) {
        cout << a[i];
    }
    return 0;
}

