int highPressure;
int lowPressure;
int a [100];
int hour = 0;
int n, j = 0;

int main () {
    cin >> n;
    for (int i = 1;
    i <= n; i++) {
        cin >> highPressure >> lowPressure;
        if (highPressure >= 90 && highPressure <= 140 && lowPressure >= 60 && lowPressure <= 90) {
            hour++;
        }
        else {
            hour = a[j];
            hour = 0;
            j++;
        }
        a[j] = hour;
    }
    while (j > 0) {
        if (a[j] > a[j - 1]) {
            a[j - 1] = a[j];
        }
        j--;
    }
    cout << a[0];
    return 0;
}

