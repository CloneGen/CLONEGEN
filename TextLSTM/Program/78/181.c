int main () {
    int z, q, s, l;
    for (z = 10; z <= 50; z = z + 10) {
        for (q = 10; q <= 50; q = q + 10) {
            if (q == z)
                continue;
            for (s = 10; s <= 50; s = s + 10) {
                if ((s == z) || (s == q))
                    continue;
                for (l = 10; l <= 50; l = l + 10) {
                    if ((l == z) || (l == q) || (l == s))
                        continue;
                    if ((z + q == s + l) && (z + l > s + q) && (z + s < q)) {
                        if (q < l) {
                            cout << 'l' << " " << l << "\n" << 'q' << " " << q << endl;
                            if (z > s)
                                cout << 'z' << " " << z << "\n" << 's' << " " << s;
                            else
                                cout << 's' << " " << s << "\n" << 'z' << " " << z;
                        }
                        else {
                            cout << 'q' << " " << q << endl;
                            if ((z > l) && (z > s)) {
                                cout << 'z' << " " << z << endl;
                                if (l > s)
                                    cout << 'l' << " " << l << "\n" << 's' << " " << s;
                                else
                                    cout << 's' << " " << s << "\n" << 'l' << " " << l;
                            }
                            else if ((l > z) && (l > s)) {
                                cout << 'l' << " " << l << endl;
                                if (z > s)
                                    cout << 'z' << " " << z << "\n" << 's' << " " << s;
                                else
                                    cout << 's' << " " << s << "\n" << 'z' << " " << z;
                            }
                            else if ((s > z) && (s > l)) {
                                cout << 's' << " " << s << endl;
                                if (z > l)
                                    cout << 'z' << " " << z << "\n" << 'l' << " " << l;
                                else
                                    cout << 'l' << " " << l << "\n" << 'z' << " " << z;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

