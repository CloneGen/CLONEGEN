int main () {
    int n, i, j, m [100], count [100] = {0}, time1 [100] = {0}, time2 [100] = {0};
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> m[i];
        if (m[i] == 0)
            count[i] = 60;
        int per [20] = {0};
        for (j = 1; j <= m[i]; j++)
            cin >> per[j];
        for (j = 1; j <= m[i]; j++) {
            count[i] = per[j];
            time1[i] = count[i] + 3 * j;
            time2[i] = time1[i] - 3;
            if (time1[i] >= 60 && time2[i] < 60) {
                count[i] = per[j];
                break;
            }
            else if (time2[i] >= 60) {
                count[i] = 60 - 3 * (j - 1);
                break;
            }
            count[i] = 60 - 3 * j;
        }
    }
    for (i = 1; i <= n; i++)
        cout << count[i] << endl;
    return 0;
}

