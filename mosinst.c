#include <stdio.h>

main()
{
	
system("mkdir /usr/lib/mos7830");
system("cp mcs7830.ko  /usr/lib/mos7830");
system("insmod mcs7830.ko");
system("touch /tmp/nprtmp");
system("grep -v 'cd /usr/lib/mos7830' /etc/rc.d/rc.local > /tmp/nprtmp");
system("cp /tmp/nprtmp /etc/rc.d/rc.local > /dev/null 2>&1");
system("rm -f /tmp/nprtmp > /dev/null 2>&1");
system("echo 'cd /usr/lib/mos7830' >> /etc/rc.d/rc.local");
system("ln -s /etc/rc.d/rc.local /etc/rc.local > /dev/null 2>&1");
system("chmod 755 /etc/rc.d/rc.local");

system("touch /tmp/nprtmp");
system("grep -v mosdriver /etc/rc.d/rc.local > /tmp/nprtmp");
system("cp /tmp/nprtmp /etc/rc.d/rc.local > /dev/null 2>&1");
system("rm -f /tmp/nprtmp > /dev/null 2>&1");
system("echo 'insmod mcs7830.ko ' >> /etc/rc.d/rc.local");
system("ln -s /etc/rc.d/rc.local /etc/rc.local > /dev/null 2>&1");
system("chmod 755 /etc/rc.d/rc.local");





}
