int all = 1;
void divd (int, int);

int main () {
    int n, num;
    cin >> n;
    while (n--) {
        cin >> num;
        divd (2, num);
        cout << all << endl;
        all = 1;
    }
    return 0;
}

void divd (int fac, int num) {
    int i;
    for (i = fac; i * i <= num; i++)
        if (num % i == 0) {
            fac = i;
            all++;
            divd (fac, num / fac);
        }
}

