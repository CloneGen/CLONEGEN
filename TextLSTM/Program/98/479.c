int main () {
    char a [1000] [45], *p = NULL;
    int n, i, count = 0;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    count = strlen (a[0]);
    cout << a[0];
    for (i = 1; i < n; i++) {
        count = count + strlen (a[i]) + 1;
        if (count <= 80) {
            cout << " " << a[i];
        }
        else {
            count = strlen (a[i]);
            cout << endl;
            cout << a[i];
        }
    }
    return 0;
}

