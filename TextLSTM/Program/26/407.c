int main () {
    char a [100];
    cin.get (a, 100, '\n');
    int i = 0;
    int n = 0;
    n = strlen (a);
    for (i = 0; i <= n - 1; i++) {
        if (a[i] != 32)
            cout << a[i];
        else if (a[i + 1] != 32)
            cout << " ";
    }
    return 0;
}

