int coun;

void depart (int n, int i) {
    int j;
    if (n == 1)
        coun++;
    else
        for (j = i; j <= n; j++)
            if (n % j == 0) {
                depart (n / j, j);
            }
}

int main () {
    int n, j;
    cin >> n;
    int b [n];
    for (j = 0; j < n; j++)
        cin >> b[j];
    for (j = 0; j < n; j++) {
        coun = 0;
        depart (b[j], 2);
        cout << coun << endl;
    }
    return 0;
}

