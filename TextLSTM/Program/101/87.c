int main (void) {
    int a_judge, b_judge, c_judge;
    int a, b, c;
    char pname [3] = {'A', 'B', 'C'};
    for (a = 0; a < 3; a++)
        for (b = 0; b < 3; b++)
            for (c = 0; c < 3; c++) {
                a_judge = (b > a) + (c == a);
                b_judge = (a > b) + (a > c);
                c_judge = (c > b) + (b > a);
                if (((2 - a) == a_judge) && ((2 - b) == b_judge) && ((2 - c) == c_judge)) {
                    if (a > b) {
                        if (b > c)
                            cout << "CBA" << endl;
                        else if (a > c)
                            cout << "BCA" << endl;
                        else
                            cout << "BAC" << endl;
                    }
                    else {
                        if (a > c)
                            cout << "CAB" << endl;
                        else if (b > c)
                            cout << "ACB" << endl;
                        else
                            cout << "ABC" << endl;
                    }
                }
            }
    return 0;
}

