int main () {
    int n = 0, integer = 0;
    int division (int, int);
    cin >> n;
    for (int i = 0;
    i < n; i++) {
        cin >> integer;
        cout << division (integer, integer) << endl;
    }
    return 0;
}

int division (int integer, int limit) {
    if (limit <= 1)
        return 0;
    switch (integer) {
    case 1 :
        return 1;
        break;
    default :
        {
            int sum = 0;
            for (int a = 1;
            a <= integer; a++) {
                if (integer % a != 0)
                    continue;
                else if (integer / a > limit)
                    continue;
                else
                    sum += division (a, integer / a);
            }
            return sum;
        }
        break;
    }
}

