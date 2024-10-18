#include <unistd.h>
#include <fcntl.h>

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		write(1, &str[i], 1);
}

void	disp_file(int fd)
{
	char	buffer;

	while(read(fd, &buffer, 1) != 0)
		write(1, &buffer, 1);
}

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		if (ac < 2)
			ft_putstr("File name missing.");
		else if (ac > 2)
			ft_putstr("Too many arguments.");
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	disp_file(fd);
	close(fd);
	return (0);
}
