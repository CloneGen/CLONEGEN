int num = 1, flag = 2;
void way (int);

int main () {
    int a, n;
    cin >> n;
    while (n--) {
        cin >> a;
        way (a);
        cout << num << endl;
        num = 1;
        flag = 2;
    }
    return 0;
}

void way (int a) {
    int i, max;
    max = sqrt (a);
    for (i = flag; i <= max; i++) {
        if (a % i == 0) {
            flag = i;
            num++;
            way (a / i);
        }
    }
}

