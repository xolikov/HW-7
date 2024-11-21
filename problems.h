#include <bits/stdc++.h>

void days2years(int &days, int &years) {
    years = days / 365;
    days = days % 365;
}

double func(double *x, double *y) {
    return (11 * (*x) * (*x) * (*x)) / 3 + 5;
}

int minsNewYear(int *hour, int *min) {
    return 1440 - ((*hour) * 60 + (*min));
}

double probability(int *y, int *w) {
    return (7 - max(*y, *w)) / 6.0;
}

int presses(int *x) {
    int cnt = *x;
    int length = 1;
    while (cnt >= 10) {
        cnt /= 10;
        length++;
    }
    int ans = (cnt - 1) * 10;
    for (int i = 1; i <= length; i++) ans += i;
    return ans;
}
