int su (int input) {
    int ju = 1;
    for (int i = 2;
    i < sqrt (input); i++) {
        if (input % i == 0)
            ju = 0;
        break;
    }
    return ju;
}

int fenjie (int input, int k) {
    int ret = 1;
    for (int i = k;
    i <= sqrt (input); i++) {
        if (input % i == 0) {
            if (su (input / i) == 0)
                ;
            {
                ret = fenjie (input / i, i) + ret;
            }
        }
    }
    return ret;
}

int main () {
    int input, num, sol;
    cin >> num;
    while (num--) {
        cin >> input;
        cout << fenjie (input, 2) << endl;
    }
    return 0;
}

