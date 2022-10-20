/**
 * _isdigit - checks if @c is digit
 * @c: the character to check
 *
 * Return: 1 on Success otherwise 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
