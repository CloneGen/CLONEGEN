int main () {
    int n, k, i, temp = 0;
    char b [1000] [50];
    char *p [1000];
    cin >> n;
    cin.get ();
    k = 1;
    while (k <= n) {
        cin >> b[k];
        p[k] = b[k];
        k++;
    }
    for (i = 1; i <= n; i++) {
        cout << p[i];
        temp++;
        temp += strlen (b[i]);
        if (temp + strlen (b[i + 1]) > 80) {
            cout << endl;
            temp = 0;
        }
        else if (i != n)
            cout << " ";
    }
    return 0;
}

