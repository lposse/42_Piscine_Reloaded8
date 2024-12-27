/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lposse <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 18:17:09 by lposse            #+#    #+#             */
/*   Updated: 2024/12/27 20:09:47 by lposse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	ft_display_file(char *argv)
{
	int		fd;
	int		cl;
	char	buf[1024];
	ssize_t	bytesleidos;

	fd = open(argv, O_RDONLY);
	if (fd < 0)
	{
		write (2, "Cannot read file.\n", 18);
		return (-1);
	}
	bytesleidos = read(fd, buf, sizeof(buf));
	while (bytesleidos > 0)
	{
		write (1, buf, bytesleidos);
		bytesleidos = read(fd, buf, sizeof(buf));
	}
	if (bytesleidos < 0)
		write (2, "Cannot read file.\n", 18);
	cl = close(fd);
	if (cl == -1)
		return (-1);
	return (0);
}

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		if (argc < 2)
			write (2, "File name is missing.\n", 22);
		else
			write (2, "Too many arguments.\n", 20);
		return (-1);
	}
	return (ft_display_file(argv[1]));
}
