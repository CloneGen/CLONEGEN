int a = 0, i = 0, sum = 1;

void f (int i, int a) {
    int j;
    for (j = i; j <= sqrt (a); j++)
        if (a % j == 0) {
            sum++;
            f (j, a / j);
        }
}

int main () {
    int n;
    cin >> n;
    while (n) {
        cin >> a;
        f (2, a);
        cout << sum << endl;
        n--;
        sum = 1;
    }
}

