int main () {
    int n, a [10], b [10], i, t = 0;
    float c [10], s = 0;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> a[i];
        t = t + a[i];
    }
    for (i = 0; i < n; i++) {
        cin >> b[i];
        if (b[i] >= 60) {
            if (b[i] > 63) {
                if (b[i] > 67) {
                    if (b[i] > 71) {
                        if (b[i] > 74) {
                            if (b[i] > 77) {
                                if (b[i] > 81) {
                                    if (b[i] > 84) {
                                        if (b[i] > 89) {
                                            c[i] = 4.0;
                                        }
                                        else {
                                            c[i] = 3.7;
                                        }
                                    }
                                    else {
                                        c[i] = 3.3;
                                    }
                                }
                                else {
                                    c[i] = 3.0;
                                }
                            }
                            else {
                                c[i] = 2.7;
                            }
                        }
                        else {
                            c[i] = 2.3;
                        }
                    }
                    else {
                        c[i] = 2.0;
                    }
                }
                else {
                    c[i] = 1.5;
                }
            }
            else {
                c[i] = 1.0;
            }
        }
        else {
            c[i] = 0;
        }
    }
    for (i = 0; i < n; i++) {
        c[i] = a[i] * c[i];
        s = s + c[i];
    }
    s = s / t;
    cout << fixed << setprecision (2) << s;
    return 0;
}

