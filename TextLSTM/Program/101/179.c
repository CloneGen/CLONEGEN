int main () {
    int a, b, c, at, bt, ct, shunxu1, shunxu2;
    for (a = 1; a <= 3; a++) {
        for (b = 1; b <= 3; b++) {
            if (b != a) {
                for (c = 1; c <= 3; c++) {
                    if (c != a && c != b) {
                        at = (b > a) + (c == a);
                        bt = (a > b) + (a > c);
                        ct = (c > b) + (b > a);
                        shunxu1 = a * 100 + b * 10 + c;
                        shunxu2 = at * 100 + bt * 10 + ct;
                        if (shunxu1 + shunxu2 == 333)
                            switch (shunxu1) {
                            case 123 :
                                cout << "ABC";
                                break;
                            case 132 :
                                cout << "ACB";
                                break;
                            case 213 :
                                cout << "BAC";
                                break;
                            case 231 :
                                cout << "CAB";
                                break;
                            case 312 :
                                cout << "BCA";
                                break;
                            default :
                                cout << "CBA";
                            }
                    }
                }
            }
        }
    }
    return 0;
}

