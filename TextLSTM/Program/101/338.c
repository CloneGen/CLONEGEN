int main () {
    int a, b, c;
    for (a = 1; a < 4; a++)
        for (b = 1; b < 4; b++) {
            if (b == a)
                continue;
            for (c = 1; c < 4; c++) {
                if ((c == b) || (c == a))
                    continue;
                if (((b > a) + (c == a) + a) != 3)
                    continue;
                if (((a > b) + (a > c) + b) != 3)
                    continue;
                if (((c > b) + (b > a) + c) != 3)
                    continue;
                if (a > b && b > c)
                    cout << "CBA" << endl;
                if (a > c && c > b)
                    cout << "BCA" << endl;
                if (b > a && a > c)
                    cout << "CAB" << endl;
                if (b > c && c > a)
                    cout << "ACB" << endl;
                if (c > b && b > a)
                    cout << "ABC" << endl;
                if (c > a && a > b)
                    cout << "BAC" << endl;
            }
        }
    return 0;
}

