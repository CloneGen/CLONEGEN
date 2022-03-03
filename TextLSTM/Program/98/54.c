int main () {
    char word [1000] [40], (*p) [40] = word;
    int n, i, g, temp = 1, cnt [1000] = {0};
    cin >> n;
    for (i = 1; i <= n; i++)
        cin >> word[i];
    for (i = 1; i <= n; i++) {
        cnt[i] = cnt[i - 1] + strlen (word[i]);
        if ((cnt[i - 1] <= 81 && cnt[i] >= 81) || i == n) {
            for (g = temp; g < i - 1; g++)
                cout << word[g] << ' ';
            cout << word[i - 1];
            if (i < n)
                cout << endl;
            else {
                cout << ' ' << word[i] << endl;
                break;
            }
            temp = i;
            cnt[i - 1] = 0;
            i--;
        }
        else
            cnt[i]++;
    }
    return 0;
}

