int main () {
    int n, count2, count1, i, j;
    int stop [30] = {0};
    int num [3000] [30] = {0};
    cin >> n;
    count2 = 0;
    while (count2 < n) {
        cin >> stop[count2];
        count1 = 0;
        while (count1 < stop[count2]) {
            cin >> num[count2][count1];
            count1++;
        }
        count2++;
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < stop[i]; j++)
            if (num[i][j] + 3 * (j + 1) > 60)
                break;
        if (j == stop[i])
            cout << 60 - 3 * stop[i];
        else {
            if (num[i][j] + 3 * (j + 1) > 63)
                cout << 60 - 3 * j;
            else
                cout << num[i][j];
        }
        cout << endl;
    }
    return 0;
}

