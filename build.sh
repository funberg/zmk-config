pushd ../app
west build -p -b nice_nano -- -DSHIELD=ahokore -DZMK_CONFIG="/workspaces/zmk-config/config" && \
cp build/zephyr/zmk.uf2 ../zmk-config/ahokore.uf2

west build -p -b nice_nano -- -DSHIELD=tbkmini_left -DZMK_CONFIG="/workspaces/zmk-config/config" && \
cp build/zephyr/zmk.uf2 ../zmk-config/tbkmini_left.uf2

west build -p -b nice_nano -- -DSHIELD=tbkmini_right -DZMK_CONFIG="/workspaces/zmk-config/config" && \
cp build/zephyr/zmk.uf2 ../zmk-config/tbkmini_right.uf2
popd