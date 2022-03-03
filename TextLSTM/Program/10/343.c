int k;
int h [30];
int r [30];

int main () {
    cin >> k;
    int i, j;
    for (i = 0; i < k; i++)
        cin >> h[i];
    r[k - 1] = 1;
    for (i = k - 2; i >= 0; i--) {
        if (r[i] >= r[i + 1]) {
            cout << "first way taken" << endl;
            r[i] = r[i + 1] + 1;
        }
        else {
            int max = 0;
            for (j = i + 1; j < k; j++) {
                if (h[j] <= h[i] && r[j] > max)
                    max = r[j];
            }
            r[i] = max + 1;
        }
    }
    int ans = 0;
    for (i = 0; i < k; i++) {
        if (r[i] > ans)
            ans = r[i];
    }
    cout << ans;
}

