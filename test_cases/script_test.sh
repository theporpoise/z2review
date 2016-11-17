#!/bin/sh
echo "should be 10 map error followed by testmap1"
./map_gen.pl 0 0 0 | ../z2review/bsq
./map_gen.pl 0 0 1 | ../z2review/bsq
./map_gen.pl 0 1 1 | ../z2review/bsq
./map_gen.pl 1 0 1 | ../z2review/bsq

echo "test" | ../z2review/bsq
echo "4est" | ../z2review/bsq
echo "-4est" | ../z2review/bsq
echo "" | ../z2review/bsq

../z2review/bsq doesnotexist
../z2review/bsq doesnotexist testmap1

echo "4est\neee\neee\neee\neee" | ../z2review/bsq

./map_gen.pl 1 1 0 | ../z2review/bsq
./map_gen.pl 1 1 9 | ../z2review/bsq
../z2review/bsq woops testmap_oops testmap_oops2 testmap_oops3
#../z2review/bsq testmap1 testmap2 testmap3 testmap4


