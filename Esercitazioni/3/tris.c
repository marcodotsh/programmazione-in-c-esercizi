#include <stdio.h>

int main(void)
{
	int vinto;
	int nIns, c, t;
	int x, y;
	char tris[3][3];
	char simbolo[2];

	vinto = 0;
	nIns = 0;

	simbolo[0]='X';
	simbolo[1]='O';

	for(c=0;c<3;c++)
	{
		for(t=0;t<3;t++)
		{
			tris[c][t] = ' ';
		}
	}

	t = 0;

	while(!vinto && nIns<9)
	{
		do
		{
			scanf("%d %d", &x, &y);
		}while(tris[x][y]!=' ');

		tris[x][y] = simbolo[t];
		nIns++;

		for(c=0;c<3;c++)
		{
			printf("\n %c|%c|%c", tris[c][0], tris[c][1], tris[c][2]);
			if(c<2)
			{
				printf("\n______");
			}
		}

		if
		(     
		 	(tris[0][0]==simbolo[t]
			&& tris[1][1]==simbolo[t]
			&& tris[2][2]==simbolo[t])
			||(tris[0][2]==simbolo[t]
			&& tris[1][1]==simbolo[t]
			&& tris[2][0]==simbolo[t])
		)
		{
			vinto = 1;
		}
		else
		{
			for(c=0;c<3;c++)
			{
				if
				(
				 	(tris[c][0]==simbolo[t]
					&& tris[c][1]==simbolo[t]
					&& tris[c][2]==simbolo[t])
					||(tris[0][c]==simbolo[t]
					&& tris[1][c]==simbolo[t]
					&& tris[2][c]==simbolo[t])
				)
				{
					vinto=1;
				}
			}
		}

		if(!vinto)
		{
			t = (t + 1) % 2;
		}
	}

	if(vinto)
	{
		printf("Ha vinto il giocatore %d!\n", t + 1);
	}else
	{
		printf("pareggio...\n");
	}
	
	return 0;

}

