#!/bin/sh
# This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/targets/android/run.sh'.
# WARNING: Changes might be lost if you edit this file directly.
set -e
cd "`dirname "$0"`"

case $1 in
debug)
    echo "Opening Android Studio"
    open -a"Android Studio" "ShareSheet"
    exit $?
    ;;
uninstall)
    echo "Uninstalling com.apps.sharesheet"
    /Applications/Fuse.app/Contents/Mono/bin/mono /Applications/Fuse.app/Contents/Uno/uno.exe adb uninstall "com.apps.sharesheet"
    exit $?
    ;;
esac

/Applications/Fuse.app/Contents/Mono/bin/mono /Applications/Fuse.app/Contents/Uno/uno.exe launch-apk "ShareSheet.apk" \
    --package=com.apps.sharesheet \
    --activity=ShareSheet \
    --sym-dir="ShareSheet/app/src/main/.uno" \
    "$@"
