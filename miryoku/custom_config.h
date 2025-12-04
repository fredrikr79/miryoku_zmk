// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku
#define MIRYOKU_KLUDGE_CUSTOM_CONFIG \
/ { \
    combos { \
        compatible = "zmk,combos"; \
        combo_aa { \
            timeout-ms = <50>; \
            key-positions = <10 11>; \
            bindings = <&kp RA(W)>; \
        }; \
        combo_oe { \
            timeout-ms = <50>; \
            key-positions = <11 12>; \
            bindings = <&kp RA(L)>; \
        }; \
        combo_ae { \
            timeout-ms = <50>; \
            key-positions = <10 12>; \
            bindings = <&kp RA(Z)>; \
        }; \
    }; \
};

