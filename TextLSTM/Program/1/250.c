int sum = 0;
void ways (int a, int last);

int main () {
    int n, num [100], i;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> num[i];
    }
    for (i = 0; i < n; i++) {
        ways (num[i], 2);
        cout << sum << endl;
        sum = 0;
    }
    return 0;
}

void ways (int a, int last) {
    int i, j;
    for (i = last; i <= a; i++) {
        if (a < i) {
        }
        else if (a == i) {
            sum++;
        }
        else if (a % i == 0) {
            ways (a / i, i);
        }
    }
}

