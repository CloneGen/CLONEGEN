int main (int argc, const  char *argv []) {
    int a [100000] = {0};
    int n;
    cin >> n;
    for (int i = 0;
    i < n; i++)
        cin >> a[i];
    int k;
    cin >> k;
    int lenth = n;
    for (int i = 0;
    i < n; i++) {
        if (a[i] == k) {
            for (int j = i;
            j < n - 1; j++)
                a[j] = a[j + 1];
            a[n - 1] = k + 1;
            lenth--;
            i--;
        }
    }
    for (int i = 0;
    i < lenth; i++) {
        cout << a[i];
        if (i != lenth - 1)
            cout << " ";
    }
    cout << endl;
    return 0;
}

