void process (int af) {
    int bf;
    if (af % 2 == 0) {
        bf = af / 2;
        cout << af << "/2=" << bf << endl;
        process (bf);
    }
    else if ((af % 2 == 1) && (af != 1)) {
        bf = af * 3 + 1;
        cout << af << "*3+1=" << bf << endl;
        process (bf);
    }
    else if (af == 1)
        cout << "End" << endl;
}

int main () {
    int n;
    cin >> n;
    process (n);
    return 0;
}

