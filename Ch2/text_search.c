#include <stdio.h>
#include <string.h>

char tracks[][80]=
{
	"I left my heart in Harvard Med School",
	"Newark, Newark - a wonderful town",
	"Dancing with a Dork",
	"From here to maternity",
	"The girl from Iwo Jima",
};

void find_track(char search_for[])
{
	int i;
	for( i=0; i < 5; i++)
	{
		if(strstr(tracks[i], search_for))
			printf("Track %i: '%s'\n", i, tracks[i]);
	}
	/*for(i = 0; i < 5; i++)
	{
		printf("Source: %s\n", tracks[i]);
		printf("Target: %s\n", search_for);
		char* b_chk = strstr(tracks[i], search_for);
		printf("chk: %s\n", b_chk);
		if(b_chk)
		{
			puts("Find one!\n");
			printf("Track %i: '%s'\n", i, tracks[i]);
			return;
		}
	}
	puts("NOT FOUND!\n");*/
	
}

int main()
{
	char search_for[80];
	/*for(int i=0; i < 5; i++)
		printf("'%s'\n", tracks[i]);*/
	printf("search for: ");
	fgets(search_for, 80, stdin);
	size_t ln = strlen(search_for) - 1;	
	if(search_for[ln] =='\n')
		search_for[ln] = '\0';
	find_track(search_for);
	return 0;
}
