int Reverse (int num) {
    int n, temp [10];
    int f = 0, j = 0, k;
    double l = 0;
    n = abs (num);
    while (n != 0) {
        temp[j] = n % 10;
        n = n / 10;
        j++;
    }
    for (k = j - 1; k >= 0; k--) {
        f += temp[k] * pow (10.0, l);
        l += 1;
    }
    if (num >= 0)
        return f;
    else
        return -f;
}

int main () {
    int n [6], i, j;
    for (i = 0; i <= 5; i++)
        cin >> n[i];
    for (j = 0; j <= 5; j++)
        cout << Reverse (n[j]) << endl;
    return 0;
}

