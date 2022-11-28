#include <stdio.h>
#include "util.h"

char* tratarComorbidade(int n) {
    switch (n) {
        case 1:
            return "diabetes";
        case 2:
            return "obesidade";
        case 3:
            return "hipertenção";
        case 4:
            return "tuberculose";
        case 5:
            return "outros";
    }
}
