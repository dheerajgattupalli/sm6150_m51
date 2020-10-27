#!bin/bash
# Custom Flashable Effort Less Maker
# Copyright 2021, firemax13@github.com

set -e

echo " " " "
echo "Fire Kernel Flashable Maker"
echo " " " "
echo "Setting Up Please Wait"
echo " " " "

echo "Setting Proper Directories"
KERNEL_PATH="/home/$USER/m51kernel"
BINARIES_PATH="out/arch/arm64/boot/"
ANYKERNEL_DIR="$(pwd)"

echo "Setting FireKernel Versions"
FIRE_KERNEL_VERSION="FireKernel_Revision_2.1"
FIRE_KERNEL_EDITION="_InitialEdition"
FIRE_KERNEL_STATUS="_Official"
BUILD_DATE="_$(date +%y%m%d)"
DEVICE_CODE="_m51"
DEVICE_MODEL="_SM-M515"
echo " "

echo "Cleaning Up Old Binaries and flash file"
rm -rfv *.gz-dtb *.zip
echo " " " "

echo "Copying Kernel Binaries"
cp -v $KERNEL_PATH/$BINARIES_PATH/Image.gz-dtb Image.gz-dtb
echo " " " "

echo "Making Flashable"
zip -r9 $FIRE_KERNEL_VERSION$FIRE_KERNEL_STATUS$FIRE_KERNEL_EDITION$DEVICE_CODE$DEVICE_MODEL$BUILD_DATE.zip * -x .git README.md make_flashable.sh ramdisk/placeholder
echo " " " "
echo "Done! Ready to Flash & Fuel to the device"
