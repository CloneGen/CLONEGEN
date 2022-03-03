int main () {
    int s [100] = {0};
    int n = 0;
    cin >> n;
    for (int i = 0;
    i < n; i++) {
        cin >> s[i];
        if (s[i] == 1 || s[i] == 2)
            cout << 1 << endl;
        else {
            long long int f [10000];
            f[1] = 1;
            f[2] = 1;
            for (int j = 3;
            j <= s[i]; j++) {
                f[j] = f[j - 1] + f[j - 2];
            }
            cout << f[s[i]] << endl;
        }
    }
    return 0;
}

