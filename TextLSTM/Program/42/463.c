int n = 0, i = 0, k = 0, j = 0, mid = 0, p = 0, t = 0;
int shuru [100000];

int main () {
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> shuru[i];
    cin >> k;
    i = 0;
    p = n;
    while (n--) {
        if (shuru[i] != k) {
            i++;
            t++;
        }
        else {
            for (j = (i + 1); j < p; j++) {
                mid = shuru[i];
                shuru[j - 1] = shuru[j];
            }
            shuru[p - 1] = mid;
        }
    }
    cout << shuru[0];
    for (i = 1; i < t; i++) {
        if (shuru[i] != k)
            cout << ' ' << shuru[i];
        else
            break;
    }
    return 0;
}

