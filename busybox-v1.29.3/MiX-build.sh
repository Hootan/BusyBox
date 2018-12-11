#make standalone toolchain

#rm -r /tc
#/mnt/d/Projects/Android/SDK/ndk-bundle-linux-r12/build/tools/make_standalone_toolchain.py --arch arm --api 9 --force --install-dir /tc/arm
#/mnt/d/Projects/Android/SDK/ndk-bundle-linux-r12/build/tools/make_standalone_toolchain.py --arch x86 --api 9 --force --install-dir /tc/x86
#/mnt/d/Projects/Android/SDK/ndk-bundle-linux-r14/build/tools/make_standalone_toolchain.py --arch mips --api 9 --force --install-dir /tc/mips
#/mnt/d/Projects/Android/SDK/ndk-bundle-linux-r14/build/tools/make_standalone_toolchain.py --arch arm64 --api 21 --force --install-dir /tc/arm64
#/mnt/d/Projects/Android/SDK/ndk-bundle-linux-r14/build/tools/make_standalone_toolchain.py --arch x86_64 --api 21 --force --install-dir /tc/x64
#/mnt/d/Projects/Android/SDK/ndk-bundle-linux-r14/build/tools/make_standalone_toolchain.py --arch mips64 --api 21 --force --install-dir /tc/mips64

export p=$PATH


#------------------------------------------------
echo "arm..."
export PATH=$p:/tc/arm/bin/
cp configs/android_ndk_mini-arm-defconfig .config
make clean
make
cp -r busybox binaries/shared/arm/

#------------------------------------------------
echo "x86..."
export PATH=$p:/tc/x86/bin/
cp configs/android_ndk_mini-x86-defconfig .config
make clean
make
cp -r busybox binaries/shared/x86/

#------------------------------------------------
echo "mips..."
export PATH=$p:/tc/mips/bin/
cp configs/android_ndk_mini-mips-defconfig .config
make clean
make
cp -r busybox binaries/shared/mips/

#------------------------------------------------
echo "arm64..."
export PATH=$p:/tc/arm64/bin/
cp configs/android_ndk_mini-arm64-defconfig .config
make clean
make
cp -r busybox binaries/shared/arm64/

#------------------------------------------------
echo "mips64..."
export PATH=$p:/tc/mips64/bin/
cp configs/android_ndk_mini-mips64-defconfig .config
make clean
make
cp -r busybox binaries/shared/mips64/

#------------------------------------------------
echo "x64..."
export PATH=$p:/tc/x64/bin/
cp configs/android_ndk_mini-x64-defconfig .config
make clean
make
cp -r busybox binaries/shared/x64/


make clean
export PATH=$p
