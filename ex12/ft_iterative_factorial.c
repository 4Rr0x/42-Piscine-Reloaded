int	ft_iterative_factorial(int nb)
{
	int	fac;

	fac = nb;
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0)
		fac++;
	while (nb > 1)
	{
		fac *= --nb;
	}
	return (fac);
}
