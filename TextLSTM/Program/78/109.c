int main () {
    int z, q, s, l;
    for (z = 10; z <= 50; z = z + 10)
        for (q = 10; q <= 50; q = q + 10) {
            if (q == z)
                continue;
            for (s = 10; s <= 50; s = s + 10) {
                if ((s == q) || (s == z))
                    continue;
                for (l = 10; l <= 50; l = l + 10) {
                    if ((z + q) != (s + l))
                        continue;
                    else if ((z + l) <= (s + q))
                        continue;
                    else if ((z + s) >= q)
                        continue;
                    else if ((l == z) || (l == q) || (l == s))
                        continue;
                    else {
                        cout << "l " << l << endl;
                        cout << "q " << q << endl;
                        cout << "z " << z << endl;
                        cout << "s " << s << endl;
                    }
                }
            }
        }
    return 0;
}

