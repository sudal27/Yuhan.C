#include <stdio.h>
#include <dino_screen.h>

int main()
{
	print_title_screen();
	system("cls");
	print_how_to_play_screen();
	return 0;

int dino;
int print_title_screen()
{
	printf("#############################\n");
	printf("##                         ##\n");
	printf("##        Dino RUN!        ##\n");
	printf("##         0.0.1           ##\n");
	printf("##                         ##\n");
	printf("##  1. Start game          ##\n");
	printf("##  2. How to play         ##\n");
	printf("##		   	   ##\n");
	printf("##  0. Exit                ##\n");
	printf("##                         ##\n");
	printf("#############################\n");
	

	return 0;
}

int run;
int print_how_to_play_screen()
{
	printf("##############################\n");
	printf("##                          ##\n");
ww	printf("##      To Avoid Enemy      ##\n");
	printf("##                          ##\n");
	printf("##  Press Space Bar To Jump ##\n");
	printf("##                          ##\n");
	printf("##   *  Return to menu?  *  ##\n");
	printf("##                          ##\n");
	printf("##    1.yes         2.no    ##\n");
	printf("##                          ##\n");
	printf("##############################\n");

	return 0;
}

int main()
{
	print_title_screen();
	printf("input> ");
	scanf("%d",&dino);
	while(dino < 3)
	{
		if(dino == 2)
		{
			print_how_to_play_screen();
			printf("input> ");
			scanf("%d",&run);
			while(run < 3)
			{
				if(run == 1)
				{
					print_title_screen();
					printf("input> ");
					scanf("%d",&dino);
					break;
				}
				else
				{
					break;
				}
			}
		}
		else if(dino == 3)
		{
			break;
		}	
	}
	return 0;
}


