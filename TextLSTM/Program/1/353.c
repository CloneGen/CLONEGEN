void decprime (int begain, int a);
int sum = 1;

int main () {
    int n, a;
    int k;
    cin >> n;
    for (k = 0; k < n; k++) {
        cin >> a;
        decprime (2, a);
        cout << sum << endl;
        sum = 1;
    }
    return 0;
}

void decprime (int begain, int a) {
    int i;
    for (i = begain; i <= a; i++) {
        if (a % i == 0 && i <= a / i) {
            sum++;
            decprime (i, a / i);
        }
        if (i > a / i)
            break;
    }
}

