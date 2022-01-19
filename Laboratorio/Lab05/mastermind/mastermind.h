/* Regular text */
#define BLKT "\e[0;30m"
#define REDT "\e[0;31m"
#define GRNT "\e[0;32m"
#define YELT "\e[0;33m"
#define BLUT "\e[0;34m"
#define MAGT "\e[0;35m"
#define CYNT "\e[0;36m"
#define WHTT "\e[0;37m"

//Regular background
#define BLKB "\e[40m"
#define REDB "\e[41m"
#define GRNB "\e[42m"
#define YELB "\e[43m"
#define BLUB "\e[44m"
#define MAGB "\e[45m"
#define CYNB "\e[46m"
#define WHTB "\e[47m"
/* Reset */
/* Use this at the end, otherwise the color could be applied to users' terminal prompt. */
#define reset "\e[0m"

#define WTILE "\e[47;30m"
#define BTILE "\e[40;37m"


typedef struct {
	int seqLen;
	int nRounds;
} Settings;

typedef struct {
	char color[8];
	char name[256];
} Player;

void playerSettings(Player *player);

void printName(Player *player);

char* strmalloc(int len);

void genSequence(char str[], int len);

void printSequence(char str[], int len);

void printWhiteBlack(int w, int b);

int checkInput(char str[], int len);

void checkSequence(char secr[], char curr[], int len, int *white, int *black);
/* if black == len , user has won else  */
