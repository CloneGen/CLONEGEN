int main () {
    int a, b, c, d;
    for (a = 1; a <= 5; a++)
        for (b = 1; b <= 5; b++)
            for (c = 1; c <= 5; c++)
                for (d = 1; d <= 5; d++)
                    if ((a != b) && (a != c) && (a != d) && (b != c) && (b != d) && (c != d))
                        if ((a + b == c + d) + (a + d > b + c) + (a + c < b) == 3) {
                            if (a == 5)
                                cout << "z 50" << endl;
                            if (b == 5)
                                cout << "q 50" << endl;
                            if (c == 5)
                                cout << "s 50" << endl;
                            if (d == 5)
                                cout << "l 50" << endl;
                            if (a == 4)
                                cout << "z 40" << endl;
                            if (b == 4)
                                cout << "q 40" << endl;
                            if (c == 4)
                                cout << "s 40" << endl;
                            if (d == 4)
                                cout << "l 40" << endl;
                            if (a == 3)
                                cout << "z 30" << endl;
                            if (b == 3)
                                cout << "q 30" << endl;
                            if (c == 3)
                                cout << "s 30" << endl;
                            if (d == 3)
                                cout << "l 30" << endl;
                            if (a == 2)
                                cout << "z 20" << endl;
                            if (b == 2)
                                cout << "q 20" << endl;
                            if (c == 2)
                                cout << "s 20" << endl;
                            if (d == 2)
                                cout << "l 20" << endl;
                            if (a == 1)
                                cout << "z 10" << endl;
                            if (b == 1)
                                cout << "q 10" << endl;
                            if (c == 1)
                                cout << "s 10" << endl;
                            if (d == 1)
                                cout << "l 10" << endl;
                        }
    return 0;
}

