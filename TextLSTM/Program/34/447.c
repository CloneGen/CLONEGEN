int main () {
    int n;
    cin >> n;
    for (int k = 0;
    k < 2000; k++) {
        if (n == 1) {
            cout << "End";
            break;
        }
        else if (n % 2) {
            int temp0 = n;
            n = n * 3 + 1;
            cout << temp0 << "*3+1" << "=" << n << endl;
        }
        else {
            int temp1 = n;
            n = n / 2;
            cout << temp1 << "/2=" << n << endl;
        }
    }
    return 0;
}

