int main () {
    int n, l;
    char a [100001];
    cin >> n;
    for (int i = 0;
    i < n; i++) {
        int flag [26] = {0}, count [26] = {0}, min = 100001;
        cin >> a;
        l = strlen (a);
        for (int j = 0;
        j < l; j++) {
            count[a[j] - 'a']++;
            if (flag[a[j] - 'a'] == 0)
                flag[a[j] - 'a'] = j;
        }
        for (int j = 0;
        j < 26; j++)
            if (count[j] == 1 && flag[j] < min)
                min = flag[j];
        if (min == 100001)
            cout << "no";
        else
            cout << a[min];
        cout << endl;
    }
    return 0;
}

