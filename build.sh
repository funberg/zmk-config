#!/bin/bash
side="_left"
while getopts .r flag; do
    case "${flag}" in
      r) side="_right"
      echo "right!!";;
      h) help
      exit;;
    esac
done

if [ -z "$1" ]; then
    echo "build.sh BOARD_NAME [-r]"
    echo "  -r Compile for right side of split, default left"
    exit
fi

name=${@:$OPTIND:1}

echo "input: $name $side" 

case "$name" in
    zen)
        #[[ -z "$side" ]] && side="_left";
        board="corneish_zen_v2$side"
        output="$name$side"
        ;;
    ahokore)
        board="nice_nano"
        output="$name"
        extra="-DSHIELD=ahokore"
        ;;
    tbkmini)
        board="nice_nano"
        output="$name$side"
        extra="-DSHIELD=tbkmini$side"
        ;;
esac

cmd="west build -p -b ${board} -- ${extra} -DZMK_CONFIG=/workspaces/zmk-config/config"
cpy="cp build/zephyr/zmk.uf2 ../zmk-config/${output}.uf2"

echo $cmd

# build
pushd ../app
${cmd} && ${cpy}
popd
