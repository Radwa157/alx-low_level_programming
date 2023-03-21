 * main - Entry point
 *
 *description: prints _putchar using putchar prototype
 *
 * Return: Alway 0 (Sucess)
 */

int main(void)
{
        char str = "_putchar\n";
        int ch;

        for (ch = 0; ch < 8; ch++)
                _putchar(str[ch]);
                _putchar('\n');
 
        return (0);
}

