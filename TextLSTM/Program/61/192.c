int main () {
    int f (int x);
    int n;
    cin >> n;
    int a [50];
    for (int i = 1;
    i <= n; i++) {
        cin >> a[i];
        int z;
        z = f (a[i]);
        cout << z << endl;
    }
    return 0;
}

int f (int x) {
    int count = 2, sum1 = 1, sum2 = 1;
    if (x == 1 || x == 2)
        sum2 = 1;
    else {
        do {
            int temp;
            temp = sum2;
            sum2 = sum1 + sum2;
            sum1 = temp;
            count++;
        }
        while (count < x);
    }
    return sum2;
}

