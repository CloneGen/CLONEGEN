int main () {
    int startyear, startmonth, startday, endyear, endmonth, endday, i, j = 0, sum;
    cin >> startyear >> startmonth >> startday >> endyear >> endmonth >> endday;
    int a [12] = {31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365}, b [12] = {31, 60, 91, 121, 152, 181, 213, 244, 274, 305, 335, 366};
    if (startyear != endyear && startyear + 1 != endyear) {
        for (i = startyear + 1; i < endyear; i++)
            if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
                j++;
        if (startyear % 4 == 0 && startyear % 100 != 0 || startyear % 400 == 0) {
            if (endyear % 4 == 0 && endyear % 100 != 0 || endyear % 400 == 0) {
                if (startmonth != 1) {
                    if (endmonth != 1)
                        sum = (endyear - startyear - 1) * 365 + j + b[11] - b[startmonth - 2] - startday + b[endmonth - 2] + endday;
                    else
                        sum = (endyear - startyear - 1) * 365 + j + b[11] - b[startmonth - 2] - startday + endday;
                }
                else {
                    if (endmonth != 1)
                        sum = (endyear - startyear - 1) * 365 + j + b[11] - startday + b[endmonth - 2] + endday;
                    else
                        sum = (endyear - startyear - 1) * 365 + j + b[11] - startday + endday;
                }
            }
            else {
                if (startmonth != 1) {
                    if (endmonth != 1)
                        sum = (endyear - startyear - 1) * 365 + j + b[11] - b[startmonth - 2] - startday + a[endmonth - 2] + endday;
                    else
                        sum = (endyear - startyear - 1) * 365 + j + b[11] - b[startmonth - 2] - startday + endday;
                }
                else {
                    if (endmonth != 1)
                        sum = (endyear - startyear - 1) * 365 + j + b[11] - startday + a[endmonth - 2] + endday;
                    else
                        sum = (endyear - startyear - 1) * 365 + j + b[11] - startday + endday;
                }
            }
        }
        else {
            if (endyear % 4 == 0 && endyear % 100 != 0 || endyear % 400 == 0) {
                if (startmonth != 1) {
                    if (endmonth != 1)
                        sum = (endyear - startyear - 1) * 365 + j + a[11] - a[startmonth - 2] - startday + b[endmonth - 2] + endday;
                    else
                        sum = (endyear - startyear - 1) * 365 + j + a[11] - a[startmonth - 2] - startday + endday;
                }
                else {
                    if (endmonth != 1)
                        sum = (endyear - startyear - 1) * 365 + j + a[11] - startday + b[endmonth - 2] + endday;
                    else
                        sum = (endyear - startyear - 1) * 365 + j + a[11] - startday + endday;
                }
            }
            else {
                if (startmonth != 1) {
                    if (endmonth != 1)
                        sum = (endyear - startyear - 1) * 365 + j + a[11] - a[startmonth - 2] - startday + a[endmonth - 2] + endday;
                    else
                        sum = (endyear - startyear - 1) * 365 + j + a[11] - a[startmonth - 2] - startday + endday;
                }
                else {
                    if (endmonth != 1)
                        sum = (endyear - startyear - 1) * 365 + j + a[11] - startday + a[endmonth - 2] + endday;
                    else
                        sum = (endyear - startyear - 1) * 365 + j + a[11] - startday + endday;
                }
            }
        }
    }
    if (startyear + 1 == endyear) {
        if (startyear % 4 == 0 && startyear % 100 != 0 || startyear % 400 == 0) {
            if (endyear % 4 == 0 && endyear % 100 != 0 || endyear % 400 == 0) {
                if (startmonth != 1) {
                    if (endmonth != 1)
                        sum = (endyear - startyear - 1) * 365 + b[11] - b[startmonth - 2] - startday + b[endmonth - 2] + endday;
                    else
                        sum = (endyear - startyear - 1) * 365 + b[11] - b[startmonth - 2] - startday + endday;
                }
                else {
                    if (endmonth != 1)
                        sum = (endyear - startyear - 1) * 365 + b[11] - startday + b[endmonth - 2] + endday;
                    else
                        sum = (endyear - startyear - 1) * 365 + b[11] - startday + endday;
                }
            }
            else {
                if (startmonth != 1) {
                    if (endmonth != 1)
                        sum = (endyear - startyear - 1) * 365 + b[11] - b[startmonth - 2] - startday + a[endmonth - 2] + endday;
                    else
                        sum = (endyear - startyear - 1) * 365 + b[11] - b[startmonth - 2] - startday + endday;
                }
                else {
                    if (endmonth != 1)
                        sum = (endyear - startyear - 1) * 365 + b[11] - startday + a[endmonth - 2] + endday;
                    else
                        sum = (endyear - startyear - 1) * 365 + b[11] - startday + endday;
                }
            }
        }
        else {
            if (endyear % 4 == 0 && endyear % 100 != 0 || endyear % 400 == 0) {
                if (startmonth != 1) {
                    if (endmonth != 1)
                        sum = (endyear - startyear - 1) * 365 + a[11] - a[startmonth - 2] - startday + b[endmonth - 2] + endday;
                    else
                        sum = (endyear - startyear - 1) * 365 + a[11] - a[startmonth - 2] - startday + endday;
                }
                else {
                    if (endmonth != 1)
                        sum = (endyear - startyear - 1) * 365 + a[11] - startday + b[endmonth - 2] + endday;
                    else
                        sum = (endyear - startyear - 1) * 365 + a[11] - startday + endday;
                }
            }
            else {
                if (startmonth != 1) {
                    if (endmonth != 1)
                        sum = (endyear - startyear - 1) * 365 + a[11] - a[startmonth - 2] - startday + a[endmonth - 2] + endday;
                    else
                        sum = (endyear - startyear - 1) * 365 + a[11] - a[startmonth - 2] - startday + endday;
                }
                else {
                    if (endmonth != 1)
                        sum = (endyear - startyear - 1) * 365 + a[11] - startday + a[endmonth - 2] + endday;
                    else
                        sum = (endyear - startyear - 1) * 365 + a[11] - startday + endday;
                }
            }
        }
    }
    if (startyear == endyear) {
        if (startyear % 4 == 0 && startyear % 100 != 0 || startyear % 400 == 0) {
            if (startmonth != 1)
                sum = b[endmonth - 2] + endday - b[startmonth - 2] - startday;
            if (startmonth == 1) {
                if (endmonth == 1)
                    sum = endday - startday;
                else
                    sum = b[endmonth - 2] + endday - startday;
            }
        }
        else {
            if (startmonth != 1)
                sum = a[endmonth - 2] + endday - a[startmonth - 2] - startday;
            if (startmonth == 1) {
                if (endmonth == 1)
                    sum = endday - startday;
                else
                    sum = a[endmonth - 2] + endday - startday;
            }
        }
    }
    cout << sum << endl;
    return 0;
}

