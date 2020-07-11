#include <stdio.h>

main()
{

system("rmmod mcs7830");
system("rm -rf /usr/lib/mos7830");
system("grep -v 'cd /usr/lib/mos7830' /etc/rc.d/rc.local > /tmp/nprtmp_rclocal2 2>&1");
system("cp -f /tmp/nprtmp_rclocal2 /etc/rc.d/rc.local > /dev/null 2>&1");
system("rm -f /tmp/nprtmp_rclocal2 > /dev/null 2>&1");
system("grep -v 'cd /usr/lib/mos7830' /etc/rc.d/rc.local > /tmp/nprtmp_rclocal3");
system("cp -f /tmp/nprtmp_rclocal3 /etc/rc.d/rc.local > /dev/null 2>&1");
system("rm -f /tmp/nprtmp_rclocal3 > /dev/null 2>&1");
system("chmod 755 /etc/rc.d/rc.local > /dev/null 2>&1");

system("grep -v mosdriver /etc/rc.d/rc.local > /tmp/nprtmp_rclocal2 2>&1");
system("cp -f /tmp/nprtmp_rclocal2 /etc/rc.d/rc.local > /dev/null 2>&1");
system("rm -f /tmp/nprtmp_rclocal2 > /dev/null 2>&1");
system("grep -v 'mcs7830.ko' /etc/rc.d/rc.local > /tmp/nprtmp_rclocal3");
system("cp -f /tmp/nprtmp_rclocal3 /etc/rc.d/rc.local > /dev/null 2>&1");
system("rm -f /tmp/nprtmp_rclocal3 > /dev/null 2>&1");
system("chmod 755 /etc/rc.d/rc.local > /dev/null 2>&1");



}
