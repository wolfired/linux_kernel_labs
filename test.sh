gcc -o main main.c

make LLVM=1
modinfo hello.ko
sudo insmod hello.ko age=41 ids=2,4,6
sudo rmmod hello.ko
sudo dmesg | tail -10
