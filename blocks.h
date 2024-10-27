//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
    {" |", "", 0 ,0},
	{"📑 ", "tasks", 5, 3},
    {"|", "", 0 ,0},
	{"", "volume", 0, 10},
    {"💽 ", "diskusage", 60, 14},
	{"🚨 ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g", 5, 0},
    {"", "forecast",  18000, 3},
	{"🌳 ", "calender", 5, 5},
	{"🕗 ", "date '+%I:%M:%S%p'", 1, 0},
    {"|", "", 0 ,0},
};

static char delim[] = " ";
static unsigned int delimLen = 5;

