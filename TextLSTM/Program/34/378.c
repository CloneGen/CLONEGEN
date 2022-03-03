void jiaogu (int n) {
    if (n == 1)
        cout << "End";
    else {
        if (n % 2 == 0) {
            cout << n << "/2=";
            n = n / 2;
            cout << n << endl;
        }
        else {
            cout << n << "*3+1=";
            n = n * 3 + 1;
            cout << n << endl;
        }
        jiaogu (n);
    }
}

int main () {
    int n;
    cin >> n;
    jiaogu (n);
    return 0;
}

