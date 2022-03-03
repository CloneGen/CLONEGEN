int sum, temp;
void fact (int);

int main () {
    int n, i, k;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> k;
        sum = 0;
        temp = 2;
        fact (k);
        cout << sum << endl;
    }
    return 0;
}

void fact (int k) {
    if (k == 1) {
        sum++;
        return;
    }
    int i;
    for (i = temp; i <= k; i++) {
        if (k % i == 0) {
            temp = i;
            fact (k / i);
        }
    }
}

