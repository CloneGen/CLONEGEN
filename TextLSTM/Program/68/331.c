int main () {
    int i = 0, num = 0, n = 0, t1 = 0, t2 = 0, shu = 0;
    cin >> n;
    for (shu = 6; shu <= n; shu = shu + 2) {
        for (num = 3; num <= shu / 2; num = num + 2) {
            t1 = 0;
            for (i = 2; i <= sqrt (num); i++) {
                if (num % i == 0) {
                    t1 = 1;
                    break;
                }
                else
                    continue;
            }
            if (t1 == 1)
                continue;
            else {
                t2 = 0;
                for (i = 2; i <= sqrt (shu - num); i++) {
                    if ((shu - num) % i == 0) {
                        t2 = 1;
                        break;
                    }
                    else
                        continue;
                }
            }
            if (t2 == 1)
                continue;
            else
                cout << shu << "=" << num << "+" << shu - num << endl;
            break;
        }
    }
    return 0;
}

