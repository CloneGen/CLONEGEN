int main () {
    int a, b, c, d = 0;
    for (a = 1; a <= 5; a++)
        for (b = 1; b <= 5; b++)
            for (c = 1; c <= 5; c++)
                for (d = 1; d <= 5; d++)
                    if (a + b == c + d && a + d > b + c && a + c < b) {
                        for (int i = 1;
                        i <= 4; i++) {
                            int max = 0, p = 0;
                            if (a > b) {
                                max = a;
                                p = 1;
                            }
                            else {
                                max = b;
                                p = 2;
                            }
                            if (c > max) {
                                max = c;
                                p = 3;
                            }
                            if (d > max) {
                                max = d;
                                p = 4;
                            }
                            switch (p) {
                            case 1 :
                                {
                                    cout << "z " << max * 10 << endl;
                                    a = 0;
                                    break;
                                }
                            case 2 :
                                {
                                    cout << "q " << max * 10 << endl;
                                    b = 0;
                                    break;
                                }
                            case 3 :
                                {
                                    cout << "s " << max * 10 << endl;
                                    c = 0;
                                    break;
                                }
                            case 4 :
                                {
                                    cout << "l " << max * 10 << endl;
                                    d = 0;
                                    break;
                                }
                            }
                        }
                        return 0;
                    }
    return 0;
}

