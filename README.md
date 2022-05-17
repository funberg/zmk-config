# First run in container

Read https://zmk.dev/docs/development/setup
$ ./interactive.sh

> cd /workspaces/
> west init -l app/
> west update
> west zephyr-export

# Local build
$ ./interactive.sh
> cd /workspaces/zmk-config
> ./build.sh