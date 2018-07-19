//结构数组的运用
#include <stdio.h>
struct time
{
	int hour;
	int minutes;
	int seconds;
};

struct time timeUpdate(struct time now);

int main(int argc, char const *argv[])
{
	struct time testTimes[5] = {
		{11, 59, 59}, {12, 0, 0}, {1, 29, 59}, {23, 59, 59}, {19, 12, 27}
	};

	for (int i = 0; i < 5; i++)
	{
		printf("Time is %.2i:%.2i:%.2i\n",
		       testTimes[i].hour, testTimes[i].minutes, testTimes[i].seconds);

		testTimes[i] = timeUpdate(testTimes[i]);
		printf("...one second later it's %.2i:%.2i:%.2i\n",
		       testTimes[i].hour, testTimes[i].minutes, testTimes[i].seconds);

	}

	return 0;
}
struct time timeUpdate(struct time now)
{
	++now.seconds;
	if (now.seconds == 60)
	{
		now.seconds = 0;
		++now.minutes;

		if (now.minutes == 60)
		{
			now.minutes = 0;
			++now.hour;
			if (now.hour == 24)
			{
				now.hour = 0;
			}
		}
	}
	return now;
};


//嵌套结构的运用
#include<stdio.h>
struct point
{
	int x;
	int y;
};
struct rectangle
{
	struct point p1;
	struct point p2;
};

void printRect(struct rectangle r)
{
	printf("<%d,%d> to <%d,%d>\n",
	       r.p1.x, r.p1.y, r.p2.x, r.p2.y);
}

int main(int argc, char const *argv[])
{
	struct rectangle rects[] =
	{
		{{1, 2}, {3, 4}},
		{{5, 6}, {7, 8}}
	};
	for (int i = 0; i < 2; ++i)
	{
		printRect(rects[i]);
	}
	return 0;
}