FROM docker.io/zmkfirmware/zmk-dev-arm:stable

COPY .bashrc tmp
RUN mv /tmp/.bashrc ~/.bashrc

RUN git clone https://github.com/zmkfirmware/zmk /workspaces
WORKDIR /workspaces/zmk-config