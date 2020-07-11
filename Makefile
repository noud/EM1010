obj-m    := mcs7830.o

KDIR    := /lib/modules/$(shell uname -r)/build
PWD    := $(shell pwd)

default:
	$(MAKE) WITHOUT_PHY=1 -C $(KDIR) M=$(shell pwd) SUBDIRS=$(PWD) modules;
load:
	modprobe mii
	WITHOUT_PHY=1 insmod mcs7830.ko
unload:
	rmmod mcs7830                                                                                                                             
install:
	cp mcs7830.ko /lib/modules/$(shell uname -r)/kernel/drivers/net/usb

uninstall:
	rm /lib/modules/$(shell uname -r)/kernel/drivers/net/usb/mcs7830.ko

clean:
	rm -rf .tmp_versions Module.symvers *.mod.c *.mod *.o *.ko .*.cmd *.order
	

