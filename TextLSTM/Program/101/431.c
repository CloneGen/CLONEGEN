int main () {
    int a, b, c;
    int i, j, k;
    for (a = 1; a < 4; a++)
        for (b = 1; b < 4; b++) {
            if (a == b)
                continue;
            for (c = 1; c < 4; c++) {
                if (c == a || c == b)
                    continue;
                if (((a + (b > a) + (a == c)) == 3) && ((b + (a > b) + (a > c)) == 3) && ((c + (c > b) + (b > a)) == 3))
                    break;
            }
        }
    a = i, b = j, c = k;
    if (a > b) {
        if (b > c)
            cout << "ABC";
        else {
            if (c < a)
                cout << "ACB";
            else
                cout << "CAB";
        }
    }
    else {
        if (a > c)
            cout << "BAC";
        else {
            if (c < b)
                cout << "BCA";
            else
                cout << "CBA";
        }
    }
    return 0;
}

