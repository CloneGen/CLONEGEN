int main () {
    int n;
    cin >> n;
    char a [10000] [41];
    int t [10000];
    char (*p) [41];
    int i;
    p = a;
    for (i = 0; i <= n - 1; i++) {
        cin >> *(p + i);
        t[i] = strlen (*(p + i));
    }
    p = a;
    int s = 0;
    int flag1 = 0;
    int flag2 = 0;
    for (i = 0; i <= n - 1; i++) {
        s += t[i];
        if (s > 80) {
            flag2 = i;
            for (i = flag1; i <= flag2 - 2; i++) {
                cout << *(p + i) << " ";
            }
            cout << *(p - 1 + flag2) << endl;
            flag1 = i + 1;
            s = 0;
        }
        else
            s += 1;
    }
    for (i = flag1; i <= n - 2; i++) {
        cout << *(p + i) << " ";
    }
    cout << *(p + n - 1) << endl;
    return 0;
}

