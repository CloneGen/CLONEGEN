int reverse (int num) {
    char Num [100];
    int i = 0, j, k;
    if (num > 0) {
        while (num != 0) {
            Num[i] = num % 10;
            num = num / 10;
            i++;
        }
        num = 0;
        for (k = 0; k < i; k++) {
            num = Num[k] + num * 10;
        }
        return num;
    }
    else if (num == 0)
        return 0;
    else {
        num = -1 * num;
        while (num != 0) {
            Num[i] = num % 10;
            num = num / 10;
            i++;
        }
        num = 0;
        for (k = 0; k < i; k++) {
            num = Num[k] + num * 10;
        }
        num = num * (-1);
        return num;
    }
}

int main () {
    int num;
    for (int k = 0;
    k < 6; k++) {
        cin >> num;
        cout << reverse (num) << endl;
    }
    return 0;
}

