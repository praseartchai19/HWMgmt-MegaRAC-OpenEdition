HOMEPAGE = "https://github.com/openbmc/phosphor-fan-presence"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://${S}/LICENSE;md5=e3fc50a88d0a364313df4b21ef20c29e"
//SRC_URI += "git://github.com/openbmc/phosphor-fan-presence"
//SRCREV = "8a0c23275e7046578031364c646738c6a8fa8b4c"

FILESPATH =. "${TOPDIR}/../openbmc_modules:"
S = "${WORKDIR}/phosphor-fan-presence"
SRC_URI = "file://phosphor-fan-presence"
SRCPV = "${AUTOREV}"

