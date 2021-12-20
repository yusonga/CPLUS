#include <stdio.h>

const int S_PER_M = 60;
const int S_PER_H = 3600;
const double M_PER_K = 0.62137; //1公里的英里数

int main(void)
{
	double distk, distm;
	double rate;
	int min, sec;
	int time;
	double mtime;
	int mmin, msec;
	printf("This program convets your time for a metric race\n");
	printf("Please enter, in kilometers, the distance run.\n");
	scanf("%lf", &distk);  //%lf表示读取一个double的值
	printf("Nexr enter the time in minutes and seconds.\n");
	printf("Begin bt entering the minutes.\n");
	scanf("%d", &min);
	time = S_PER_M*min + sec; //time to second
	distm = M_PER_K*distk; //公里换成英里
	rate = distm/time*S_PER_H;
	mtime = (double)time/distm;
	mmin = (int)mtime / S_PER_M;
	msec = (int)mtime %S_PER_M;
	printf("You ran %1.2f km(%1.2f miles) in %d min, %d sec.\n",
	distk, distm, min, sec);
	printf("That pace corresponds to running a mile in %d min, ", mmin);
	printf("%d sec.\nYour average speed was %1.2f mph.\n", msec, rate);
	return 0;
}