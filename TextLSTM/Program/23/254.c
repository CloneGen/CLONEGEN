int main () {
    char a [1000];
    int b [100], j = 1;
    cin.getline (a, 1000, '\n');
    int c = strlen (a);
    for (int i = 0;
    i < c; i++) {
        if (a[i] == ' ') {
            b[j] = i;
            j++;
        }
    }
    b[j] = c;
    for (int k = j - 1;
    k > 0; k--) {
        for (int i = b[k] + 1;
        i <= b[k + 1] - 1; i++)
            cout << a[i];
        cout << " ";
    }
    for (int i = 0;
    i < b[1]; i++)
        cout << a[i];
    return 0;
}

