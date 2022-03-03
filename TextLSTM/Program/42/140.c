int main () {
    int N;
    cin >> N;
    const  int n = N;
    int a [n];
    for (int i = 0;
    i <= n - 1; ++i) {
        cin >> a[i];
    }
    int deletenum;
    cin >> deletenum;
    int ignore = 0;
    for (int i = 0;
    i <= n - 1 - ignore; ++i) {
        if (a[i] == deletenum) {
            for (int j = i;
            j <= n - 2; ++j) {
                a[j] = a[j + 1];
            }
            --i;
            ++ignore;
        }
    }
    for (int i = 0;
    i <= n - 1 - ignore; ++i) {
        if (i == 0)
            cout << a[i];
        else
            cout << " " << a[i];
    }
    return 0;
}

