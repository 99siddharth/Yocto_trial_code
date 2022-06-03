#include<stdio.h>
void main()
{
  printf("Hello World");
}


S = "${WORKDIR}"

do_compile() {
        ${CC} hello.c ${LDFLAGS} -o hello
}

do_install() {
        install -d ${D}${bindir}
        install -m 0755 hello ${D}${bindir}
}
