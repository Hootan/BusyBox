/* This is a generated file, don't edit */

#define NUM_APPLETS 25
#define KNOWN_APPNAME_OFFSETS 0

const char applet_names[] ALIGN1 = ""
"[" "\0"
"[[" "\0"
"cat" "\0"
"chgrp" "\0"
"chmod" "\0"
"chown" "\0"
"cp" "\0"
"cut" "\0"
"dd" "\0"
"du" "\0"
"ln" "\0"
"ls" "\0"
"md5sum" "\0"
"mkdir" "\0"
"mkfifo" "\0"
"mv" "\0"
"readlink" "\0"
"rm" "\0"
"rmdir" "\0"
"sha1sum" "\0"
"sha256sum" "\0"
"sha3sum" "\0"
"sha512sum" "\0"
"test" "\0"
"touch" "\0"
;

#define APPLET_NO_cat 2
#define APPLET_NO_chgrp 3
#define APPLET_NO_chmod 4
#define APPLET_NO_chown 5
#define APPLET_NO_cp 6
#define APPLET_NO_cut 7
#define APPLET_NO_dd 8
#define APPLET_NO_du 9
#define APPLET_NO_ln 10
#define APPLET_NO_ls 11
#define APPLET_NO_md5sum 12
#define APPLET_NO_mkdir 13
#define APPLET_NO_mkfifo 14
#define APPLET_NO_mv 15
#define APPLET_NO_readlink 16
#define APPLET_NO_rm 17
#define APPLET_NO_rmdir 18
#define APPLET_NO_sha1sum 19
#define APPLET_NO_sha256sum 20
#define APPLET_NO_sha3sum 21
#define APPLET_NO_sha512sum 22
#define APPLET_NO_test 23
#define APPLET_NO_touch 24

#ifndef SKIP_applet_main
int (*const applet_main[])(int argc, char **argv) = {
test_main,
test_main,
cat_main,
chgrp_main,
chmod_main,
chown_main,
cp_main,
cut_main,
dd_main,
du_main,
ln_main,
ls_main,
md5_sha1_sum_main,
mkdir_main,
mkfifo_main,
mv_main,
readlink_main,
rm_main,
rmdir_main,
md5_sha1_sum_main,
md5_sha1_sum_main,
md5_sha1_sum_main,
md5_sha1_sum_main,
test_main,
touch_main,
};
#endif

const uint8_t applet_flags[] ALIGN1 = {
0x8f,
0xaa,
0xa2,
0xae,
0xbb,
0xea,
0x03,
};

const uint8_t applet_install_loc[] ALIGN1 = {
0x11,
0x11,
0x11,
0x11,
0x11,
0x11,
0x11,
0x11,
0x11,
0x11,
0x11,
0x11,
0x01,
};
