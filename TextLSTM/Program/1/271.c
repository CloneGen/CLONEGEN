int numcheck (int num, int a) {
    int i = 0, sum = 0;
    if (num == 1)
        return 1;
    else if (num < a)
        return 0;
    else {
        for (i = a; i <= num; i++) {
            if (num % i == 0)
                sum = sum + numcheck (num / i, i);
        }
    }
    return sum;
}

int main () {
    int n = 0, i = 0, num = 0, sum = 0;
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> num;
        sum = numcheck (num, 2);
        cout << sum << endl;
    }
    return 0;
}

