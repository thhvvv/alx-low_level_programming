/**
 * _isdigit- Check digits 0-9
 * @c: The character to be checked
 *
 * Return: 1 if is digit 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
