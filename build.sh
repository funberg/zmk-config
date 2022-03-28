pushd ../app
west build -p -b nice_nano -- -DSHIELD=ahokore -DZMK_CONFIG="/workspaces/zmk-config-ahokore/config" && \
cp build/zephyr/zmk.uf2 ../zmk-config-ahokore/ahokore.uf2
popd