int main () {
    int n, b = 0;
    cin >> n;
    const  int i = n;
    int a [i];
    for (b = 0; b < i; b++)
        cin >> a[b];
    int d, h = 0, c;
    cin >> d;
    for (b = i - 1; b >= 0; b--)
        if (a[b] == d) {
            for (c = b; c <= i - 1; c++)
                a[c] = a[c + 1];
            h++;
        }
    int f = i - h;
    for (b = 0; b < f - 1; b++) {
        cout << a[b] << " ";
    }
    cout << a[f - 1];
    return 0;
}

