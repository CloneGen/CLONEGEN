int num;

void divide (int n, int from) {
    int i;
    for (i = from; i < n; i++) {
        if (n % i == 0) {
            if (n / i < i) {
                return;
            }
            num++;
            divide (n / i, i);
        }
    }
}

int main (int argc, const  char *argv []) {
    int n;
    cin >> n;
    int i;
    int numberToDivide;
    for (i = 0; i < n; i++) {
        cin >> numberToDivide;
        num = 0;
        divide (numberToDivide, 2);
        cout << num + 1 << endl;
    }
}

