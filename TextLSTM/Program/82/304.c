int main () {
    int n;
    cin >> n;
    int high, low;
    int j = 0;
    int flag [n];
    for (int k = 0;
    k < n; k++)
        flag[k] = 0;
    for (int i = 0;
    i < n; i++) {
        cin >> high >> low;
        if (high <= 140 && high >= 90 && low >= 60 && low <= 90)
            flag[j]++;
        else
            j++;
    }
    int max = flag[0];
    for (int l = 0;
    l < n; l++) {
        if (flag[l] > max)
            max = flag[l];
    }
    cout << max << endl;
    return 0;
}

