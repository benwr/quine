#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void make_literal(char const *input, char *output) {static char inputs[] = "\a\b\f\n\r\t\v\\\"\'";static char outputs[] = "abfnrtv\\\"\'"; char *p, *pos; for (;*input;input++) { if (NULL!= (pos=strchr(inputs, *input))) { *output++ = '\\'; *output++ = outputs[pos-inputs]; } else *output++ = *input; } *output = '\0'; }
int main(int argc, char * argv[]) {
char * s = "#include <stdio.h>\n#include <stdlib.h>\n#include <string.h>\nvoid make_literal(char const *input, char *output) {static char inputs[] = \"\\a\\b\\f\\n\\r\\t\\v\\\\\\\"\\\'\";static char outputs[] = \"abfnrtv\\\\\\\"\\\'\"; char *p, *pos; for (;*input;input++) { if (NULL!= (pos=strchr(inputs, *input))) { *output++ = \'\\\\\'; *output++ = outputs[pos-inputs]; } else *output++ = *input; } *output = \'\\0\'; }\nint main(int argc, char * argv[]) {\nchar * s = \"%s\";\nchar * lit = malloc(strlen(s) * 2 + 1);\nmake_literal(s, lit);\nprintf(s, lit);\nfree(lit);\n}\n";
char * lit = malloc(strlen(s) * 2 + 1);
make_literal(s, lit);
printf(s, lit);
free(lit);
}
