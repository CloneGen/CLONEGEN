int sum = 0, t;

void dg (int s) {
    for (int i = s;
    i <= t; i++) {
        if (t % i == 0) {
            t = t / i;
            if (t == 1)
                sum++;
            else
                dg (i);
            t = t * i;
        }
    }
}

int main () {
    int n;
    cin >> n;
    while (n--) {
        cin >> t;
        dg (2);
        cout << sum << endl;
        sum = 0;
    }
    return 0;
}

