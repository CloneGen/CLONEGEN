int main () {
    int a, bai, shi, ge;
    int n100, n50, n20, n10, n5, n1;
    cin >> a;
    bai = a / 100;
    shi = (a - bai * 100) / 10;
    ge = a % 10;
    n100 = bai;
    if (shi >= 5) {
        n50 = 1;
        if ((shi - 5) >= 2) {
            n20 = (shi - 5) / 2;
            n10 = shi - 5 - 2 * n20;
        }
        else {
            n20 = 0;
            n10 = shi - 5;
        }
    }
    else {
        n50 = 0;
        if (shi >= 2) {
            n20 = shi / 2;
            n10 = shi - 2 * n20;
        }
        else {
            n20 = 0;
            n10 = shi;
        }
    }
    if (ge >= 5) {
        n5 = 1;
        n1 = ge - 5;
    }
    else {
        n5 = 0;
        n1 = ge;
    }
    cout << n100 << endl << n50 << endl << n20 << endl << n10 << endl << n5 << endl << n1 << endl;
    return 0;
}

