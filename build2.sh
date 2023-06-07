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

cmd="west build -p -b ${board} -- ${extra} -DZMK_CONFIG=\"/workspaces/zmk-config/config\" && \
cp build/zephyr/zmk.uf2 ../zmk-config/${output}.uf2"

echo $cmd

pushd ../app
${cmd}
popd


# west build -p -b nice_nano -- -DSHIELD=ahokore -DZMK_CONFIG="/workspaces/zmk-config/config" && \
# cp build/zephyr/zmk.uf2 ../zmk-config/ahokore.uf2

# west build -p -b corneish_zen_v2_left -- -DZMK_CONFIG="/workspaces/zmk-config/config" && \
# cp build/zephyr/zmk.uf2 ../zmk-config/zen_left.uf2

#west build -p -b corneish_zen_v2_right -- -DZMK_CONFIG="/workspaces/zmk-config/config" && \
#cp build/zephyr/zmk.uf2 ../zmk-config/zen_right.uf2

# west build -p -b nice_nano -- -DSHIELD=tbkmini_left -DZMK_CONFIG="/workspaces/zmk-config/config" && \
# cp build/zephyr/zmk.uf2 ../zmk-config/tbkmini_left.uf2

# west build -p -b nice_nano -- -DSHIELD=tbkmini_right -DZMK_CONFIG="/workspaces/zmk-config/config" && \
# cp build/zephyr/zmk.uf2 ../zmk-config/tbkmini_right.uf2

# west build -p -b nice_nano -- -DSHIELD=ahokore -DKEYMAP_FILE="/workspaces/zmk-config/config/ahokore_thumbmods.keymap" -DZMK_CONFIG="/workspaces/zmk-config/config" && \
# cp build/zephyr/zmk.uf2 ../zmk-config/ahokore_thumbmods.uf2