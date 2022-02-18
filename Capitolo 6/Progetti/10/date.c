#include <stdio.h>

int main(void)
{
	int m, d, y, em, ed, ey;

	printf("Enter a date: (mm/dd/yy): ");
	scanf("%d /%d /%d", &m, &d, &y);
	em = m;
	ed = d;
	ey = y;

	while(m!=0 || d!=0 || y!=0) {
		if(y<ey || y==ey && (m<em || m==em && d<ed)) {
			em = m;
			ed = d;
			ey = y;
		}

		printf("Enter a date: (mm/dd/yy): ");
		scanf("%d /%d /%d", &m, &d, &y);
	}

	printf("%d/%d/%.2d is the earliest date\n", em, ed, ey);

	return 0;
}
