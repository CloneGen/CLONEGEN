int sum = 0;

void fact (int a, int i) {
    if (a == 1)
        sum++;
    while (i <= a) {
        if (a % i == 0)
            fact (a / i, i);
        i++;
    }
}

int main () {
    int n;
    cin >> n;
    while (n--) {
        int a;
        cin >> a;
        int i = 2;
        int result = 1;
        while (i <= a / 2) {
            if (a % i == 0) {
                sum = 0;
                fact (a / i, i);
                result += sum;
            }
            i++;
        }
        cout << result << endl;
    }
    return 0;
}

