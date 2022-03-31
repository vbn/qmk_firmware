# To compile:
# make -j16 crkbd:manna-harbour:avrdude-split-left  USER_NAME=vbn MH_OLED_IMAGE=corne.c MH_MODULE=oled MH_OLED_MODE=static
# make -j16 crkbd:manna-harbour:avrdude-split-right USER_NAME=vbn MH_OLED_IMAGE=corne.c MH_MODULE=oled MH_OLED_MODE=static

# without opt: 20270/28672
# optimization
LTO_ENABLE = yes # 17898/28672 (-8.27%)
SPACE_CADET_ENABLE = no # 17522/28672 (-1.31%)
GRAVE_ESC_ENABLE = no # 17434/28672 (-0.31%)
MAGIC_ENABLE = no # 16862/28672 (-2%)
# config.h options to remove unused features: 16312/28672 (-1.92%)
# config.h option to restrict to 8 layers: 15898/28672 (-1.44%)
# Remove AUTO_SHIFT_ENABLE = yes: 15460/28672 (-1.53%)

# Required features.
MOUSEKEY_ENABLE = yes # Mouse keys
EXTRAKEY_ENABLE = yes # Audio control and System control

SRC += vbn.c # keymap
