int divide (int a [], int low, int high) {
    int tmp = a[low];
    do {
        while (low != high && a[high] >= tmp)
            --high;
        if (low != high && a[high] < tmp) {
            a[low] = a[high];
            ++low;
        }
        while (low != high && a[low] <= tmp)
            ++low;
        if (low != high && a[low] > tmp) {
            a[high] = a[low];
            --high;
        }
    }
    while (low != high);
    a[low] = tmp;
    return low;
}

void quickSort (int a [], int low, int high) {
    if (low >= high)
        return;
    int mid = divide (a, low, high);
    quickSort (a, low, mid - 1);
    quickSort (a, mid + 1, high);
}

void QuickSort (int a [], int size) {
    quickSort (a, 0, size - 1);
}

int main () {
    while (1) {
        int num, money = 0;
        cin >> num;
        if (0 == num)
            break;
        int tian [num], qi [num];
        for (int i = 0;
        i < num; ++i)
            cin >> tian[i];
        for (int i = 0;
        i < num; ++i)
            cin >> qi[i];
        QuickSort (tian, num);
        QuickSort (qi, num);
        int t_slow = 0, t_fast = num - 1;
        int q_slow = 0, q_fast = num - 1;
        while (t_slow <= t_fast) {
            if (tian[t_fast] > qi[q_fast]) {
                ++money;
                --t_fast;
                --q_fast;
            }
            else if (tian[t_slow] > qi[q_slow]) {
                ++money;
                ++t_slow;
                ++q_slow;
            }
            else {
                if (tian[t_slow] < qi[q_fast])
                    --money;
                --q_fast;
                ++t_slow;
            }
        }
        cout << money * 200 << endl;
    }
}

