int main () {
    int z, q, s, l;
    for (z = 1; z <= 5; z++) {
        for (q = 1; q <= 5; q++) {
            for (s = 1; s <= 5; s++) {
                for (l = 1; l <= 5; l++) {
                    if ((z + q == s + l) && (z + l > s + q) && (z + s < q) && ((z - s) * (z - q) * (z - l) * (q - s) * (q - l) * (s - l) != 0)) {
                        cout << "l " << l * 10 << endl;
                        cout << "q " << q * 10 << endl;
                        cout << "z " << z * 10 << endl;
                        cout << "s " << s * 10 << endl;
                    }
                }
            }
        }
    }
    return 0;
}

