mkdir include

cd fruit

# echo "Removing tests that don't compile, fingers crossed."
# echo "" > ./tests/class_construction_tracker.h

# mkdir -p out/release
# cd out/release

export CC=$ANDROID_NDK_ROOT/toolchains/llvm/prebuilt/linux-x86_64/bin/clang
export CXX=$ANDROID_NDK_ROOT/toolchains/llvm/prebuilt/linux-x86_64/bin/clang++
cmake . -DCMAKE_BUILD_TYPE=Release -DFRUIT_USES_BOOST=False -DBUILD_SHARED_LIBS=False -DCMAKE_SYSTEM_NAME=Android -DCMAKE_ANDROID_API=24 -DCMAKE_ANDROID_ARCH_ABI=arm64-v8a -DCMAKE_ANDROID_NDK=$ANDROID_NDK_ROOT -DCMAKE_ANDROID_STL_TYPE=c++_static -DCXX_STANDARD=20 -DCMAKE_TOOLCHAIN_FILE=$ANDROID_NDK_ROOT/build/cmake/android.toolchain.cmake -DANDROID_TOOLCHAIN=clang -DFRUIT_TESTS_USE_PRECOMPILED_HEADERS=OFF && make install DESTDIR=../ -j

cd ../
mv ./usr/local/include/fruit/** ./include
mv ./usr/local/lib/libfruit.a ./

rm ./usr -R

# export repoPath=../../../
#cp ./libmimalloc.a $repoPath