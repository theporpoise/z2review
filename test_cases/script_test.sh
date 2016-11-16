#!/bin/sh
echo "should be 10 map error followed by testmap1"
./map_gen.pl 0 0 0 | .././bsq
./map_gen.pl 0 0 1 | .././bsq
./map_gen.pl 0 1 1 | .././bsq
./map_gen.pl 1 0 1 | .././bsq

echo "test" | .././bsq
echo "4est" | .././bsq
echo "-4est" | .././bsq
echo "" | .././bsq

.././bsq doesnotexist
.././bsq doesnotexist testmap1

echo "4est\neee\neee\neee\neee" | .././bsq

./map_gen.pl 1 1 0 | .././bsq
./map_gen.pl 1 1 9 | .././bsq
.././bsq testmap2 testmap3
#.././bsq testmap1 testmap2 testmap3 testmap4


