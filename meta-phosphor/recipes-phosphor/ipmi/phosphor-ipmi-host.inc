HOMEPAGE = "http://github.com/openbmc/phosphor-host-ipmid"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=fa818a259cbed7ce8bc2a22d35a464fc"
//SRC_URI += "git://github.com/openbmc/phosphor-host-ipmid"
//SRCREV = "c4f4f7a6f541412a70483241395239f4652c8462"

FILESPATH =. "${TOPDIR}/../openbmc_modules:"
S = "${WORKDIR}/phosphor-host-ipmid"
SRC_URI = "file://phosphor-host-ipmid"
SRCPV = "${AUTOREV}"

