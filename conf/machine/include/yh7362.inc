require conf/machine/include/tripledot-oem.inc

MTD_ROOTFS = "mtd0"

MACHINE_ESSENTIAL_EXTRA_RDEPENDS += "\
    tripledot-dvb-modules-yh7362 \
    "

PREFERRED_PROVIDER_virtual/kernel = "linux-tripledot-yh7362"

SOC_FAMILY = "bcm7362"

MKUBIFS_ARGS = "-m 2048 -e 126976 -c 4096"
UBINIZE_ARGS = "-m 2048 -p 128KiB -s 2048"

MACHINE_EXTRA_RRECOMMENDS += "\
    tripledot-cfe \
    "

STB_PLATFORM = "yh7362"
