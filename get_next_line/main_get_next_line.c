#include "get_next_line.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	int		fd;
	char	**line;
	int		i;
	int		ret;

	if (argc > 1)
	{
		i = 1;
		line = malloc(sizeof(char *) * argc - 1);
		while (i < argc)
		{
			fd = open(argv[i],  O_RDONLY);
			get_next_line(fd, &(line[i - 1]));
			printf("%d", fd);
			printf("%s \n", line[i - 1]);
			i++;
		}
	}
	return (0);
}
