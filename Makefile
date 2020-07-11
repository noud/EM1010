obj-m    := mcs7830.o

KDIR    := /lib/modules/$(shell uname -r)/build
PWD    := $(shell pwd)

default:
	$(MAKE) -C $(KDIR) SUBDIRS=$(PWD) modules;
load:
	modprobe mii
	insmod mcs7830.ko
unload:
	rmmod mcs7830                                                                                                                             
install:
	sh mosinstall

uninstall:
	sh mosuninstall

clean:
	rm -rf .tmp_versions Module.symvers *.mod.c *.o *.ko .*.cmd
	rm -rf modules.order
	

