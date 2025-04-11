obj-m := hello.o
 
KERNELDIR ?= /lib/modules/$(shell uname -r)/build
PWD := $(shell pwd)
 
all: default
 
default:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) modules

test:
	sudo dmesg -C
	sudo insmod hello.ko
	sudo rmmod hello.ko
	sudo dmesg
 
clean:
	rm -rf *.o *~ core .depend .*.cmd *.ko *.mod.c .tmp_versions