int main () {
    int Zw, Qw, Sw, Lw, i;
    for (Zw = 10; Zw <= 50; Zw = Zw +10)
        for (Qw = 10; Qw <= 50; Qw = Qw +10) {
            if (Zw == Qw)
                continue;
            for (Sw = 10; Sw <= 50; Sw = Sw +10) {
                if (Zw == Sw || Qw == Sw)
                    continue;
                for (Lw = 10; Lw <= 50; Lw = Lw +10) {
                    if (Zw == Lw || Qw == Lw || Sw == Lw)
                        continue;
                    if (Zw +Qw == Sw +Lw) {
                        if (Zw +Lw > Sw +Qw) {
                            if (Zw +Sw < Qw) {
                                for (i = 50; i >= 10; i = i - 10) {
                                    if (Zw == i)
                                        cout << "z " << i << endl;
                                    if (Qw == i)
                                        cout << "q " << i << endl;
                                    if (Sw == i)
                                        cout << "s " << i << endl;
                                    if (Lw == i)
                                        cout << "l " << i << endl;
                                }
                            }
                        }
                    }
                }
            }
        }
    return 0;
}

