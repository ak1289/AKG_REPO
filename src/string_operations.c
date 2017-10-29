#include <stdio.h>
#include <wchar.h>
<<<<<<< HEAD
size_t My_strlen(const wchar_t *s)
=======
size_t My_T_strlen(const wchar_t *s, wchar_t *t)
>>>>>>> 56cb9265e5298a49f931bae70cb57593afab7001
{
   const wchar_t *p = s;

   while (*p)
      ++p;

   return (p - s);
}

return (p -s );
}
<<<<<<< HEAD

char *my_strcpy(Wchar *t, char *s)
=======
char *my_strcpy(const Wchar *t, char *s)
>>>>>>> origin/wchar_support

{
   
   char *p = t;
   
    while (*t = *s)
    ;
   
   
   return p;
   
}

int main(void)
{
   int i; 
   
   char p1[32];
   char *s[] = 
   {
      "Git tutorials",
      "Tutorials Point"
      @@ -20,5 31,7 @@ int main(void)
      for (i = 0; i < 2; i)
      printf("string lenght of %s = %lu\n", s[i], my_strlen(s[i]));
      
      printf("%s\n", my_strcpy(p1, "Hello, World !!!"));
      
      return 0;
   }
}