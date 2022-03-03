int main () {
    char a [1000], b [1000] = {0};
    int sum [1000] = {0}, i = 0, j = 0, t = 0;
    cin.getline (a, 1000);
    for (i = 0; i < strlen (a); i++) {
        if (a[i] == a[i + 1] || a[i] == a[i + 1] + 32 || a[i] == a[i + 1] - 32) {
            sum[j] = sum[j] + 1;
        }
        else {
            sum[j]++;
            b[j] = a[i];
            if (b[j] > 90) {
                b[j] = b[j] - 32;
            }
            j++;
        }
    }
    do {
        cout << "(" << b[t] << "," << sum[t] << ")";
        t++;
    }
    while (sum[t] != 0);
    cout << "" << endl;
    return 0;
}

