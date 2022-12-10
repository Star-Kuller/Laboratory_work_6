#pragma once
#include <iostream>

using namespace std;

class Time
{
public:
	int hours,
		minutes,
		seconds;
	Time() {
		hours = 0;
		minutes = 0;
		seconds = 0;
	}
	Time(int h, int m, int s) {
		hours = h;
		minutes = m;
		seconds = s;
	}

	void display() {
		*this = reduction(*this);
		printf("%02d:%02d:%02d", hours, minutes, seconds);
	}

	 Time sum(Time a, Time b) {
		Time ans;
		ans.hours = a.hours + b.hours;
		ans.minutes = a.minutes + b.minutes;
		ans.seconds = a.seconds + b.seconds;
		return reduction(ans);
	}

private:

	Time reduction(Time t) {
		int temp = t.seconds + t.minutes * 60 + t.hours * 3600;
		Time ans;
		ans.hours = temp / 3600;
		temp -= 3600 * ans.hours;
		ans.minutes = temp / 60;
		temp -= 60 * ans.minutes;
		ans.seconds = temp;
		return ans;
	}
};