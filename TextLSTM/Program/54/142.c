int p = 1, count1 = 1, sum = 0;

int main () {
    int n, k;
    int min (int n, int k);
    cin >> n >> k;
    do {
        min (n, k);
    }
    while (min (n, k) < 0);
    cout << min (n, k) << endl;
    return 0;
}

int min (int n, int k) {
    if (count1 == 1) {
        count1++;
        sum = n * p + k;
        return min (n, k);
    }
    else if (count1 == n + 1) {
        return sum;
    }
    else {
        if (sum % (n - 1) == 0) {
            count1++;
            sum = (sum * n) / (n - 1) + k;
            return min (n, k);
        }
        else {
            count1 = 1;
            p++;
            return -1;
        }
    }
}

