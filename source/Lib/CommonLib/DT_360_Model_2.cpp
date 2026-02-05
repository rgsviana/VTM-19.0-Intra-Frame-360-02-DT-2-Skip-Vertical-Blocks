//RAMIRO, IAGO e ROGÉRIO - VTM 19.0 - Aceleração da Intra-Quadro 360 - Implementação da DT Modelo 2

#include "DT_360_Model_2.h"

#include <string.h>
void DT_360_Model_2::score(double * input, double * output) {
    double var0[2];
    if (input[7] <= 12.0) {
        if (input[2] <= 3.5) {
            if (input[7] <= 6.0) {
                if (input[18] <= 134357.5) {
                    if (input[6] <= 6.0) {
                        if (input[24] <= 2018.1849975585938) {
                            if (input[18] <= 13643.5) {
                                if (input[19] <= 213.14850616455078) {
                                    if (input[18] <= 6820.5) {
                                        memcpy(var0, (const double[]){0.7249190938511327, 0.2750809061488673}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.9992540580861725, 0.0007459419138274928}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var0, (const double[]){0.7318855753318247, 0.2681144246681752}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[19] <= 426.42999267578125) {
                                    memcpy(var0, (const double[]){0.99971262128356, 0.0002873787164400109}, 2 * sizeof(double));
                                } else {
                                    if (input[18] <= 27291.0) {
                                        memcpy(var0, (const double[]){0.7314946450573405, 0.2685053549426595}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.9907600943726284, 0.00923990562737165}, 2 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if (input[11] <= 1.0000200271606445) {
                                if (input[9] <= 0.5) {
                                    memcpy(var0, (const double[]){0.42562132308800577, 0.5743786769119943}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[11] <= 1.0001500248908997) {
                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    if (input[11] <= 1.0004099607467651) {
                                        if (input[12] <= 0.00006618298357352614) {
                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.42776054772075606, 0.572239452279244}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[11] <= 1.0007950067520142) {
                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[11] <= 1.0013049840927124) {
                                                if (input[12] <= -0.00008505399455316365) {
                                                    memcpy(var0, (const double[]){0.4280373831775701, 0.5719626168224299}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[11] <= 1.0019550323486328) {
                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                } else {
                                                    if (input[11] <= 1.0027300119400024) {
                                                        if (input[12] <= 0.000096720497822389) {
                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.42368379940634276, 0.5763162005936573}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[11] <= 1.0036349892616272) {
                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[11] <= 1.0046650171279907) {
                                                                if (input[12] <= 0.000524805422173813) {
                                                                    memcpy(var0, (const double[]){0.45664549129609766, 0.5433545087039023}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                if (input[11] <= 1.005840003490448) {
                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[11] <= 1.007140040397644) {
                                                                        if (input[12] <= -0.0005799905047751963) {
                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.46480614678088844, 0.5351938532191115}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        if (input[11] <= 1.0085750222206116) {
                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[11] <= 1.0101400017738342) {
                                                                                memcpy(var0, (const double[]){0.5428023558416655, 0.45719764415833447}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[11] <= 1.0118399858474731) {
                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[11] <= 1.0136800408363342) {
                                                                                        if (input[12] <= -0.00010013440078182612) {
                                                                                            memcpy(var0, (const double[]){0.425951782556083, 0.574048217443917}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                        }
                                                                                    } else {
                                                                                        if (input[11] <= 1.0156599879264832) {
                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            if (input[11] <= 1.0177749991416931) {
                                                                                                if (input[12] <= 0.00009461800800636411) {
                                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    memcpy(var0, (const double[]){0.43787402373465867, 0.5621259762653413}, 2 * sizeof(double));
                                                                                                }
                                                                                            } else {
                                                                                                if (input[11] <= 1.0200299620628357) {
                                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    if (input[11] <= 1.0224250555038452) {
                                                                                                        if (input[12] <= -0.00008108900510706007) {
                                                                                                            memcpy(var0, (const double[]){0.4243641231593039, 0.5756358768406962}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                        }
                                                                                                    } else {
                                                                                                        if (input[11] <= 1.02496999502182) {
                                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            if (input[11] <= 1.0276600122451782) {
                                                                                                                if (input[12] <= 0.000060694990679621696) {
                                                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                } else {
                                                                                                                    memcpy(var0, (const double[]){0.41920537472489283, 0.5807946252751072}, 2 * sizeof(double));
                                                                                                                }
                                                                                                            } else {
                                                                                                                if (input[11] <= 1.030489981174469) {
                                                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                } else {
                                                                                                                    memcpy(var0, (const double[]){0.7325932357562226, 0.2674067642437774}, 2 * sizeof(double));
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[2] <= 2.5) {
                            if (input[6] <= 24.0) {
                                if (input[18] <= 50781.5) {
                                    if (input[6] <= 12.0) {
                                        if (input[24] <= 1018.0899963378906) {
                                            memcpy(var0, (const double[]){0.9680742716596806, 0.0319257283403194}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.8294110547912141, 0.1705889452087859}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[17] <= 2194.5) {
                                            if (input[0] <= 29.5) {
                                                memcpy(var0, (const double[]){0.8246913365863824, 0.17530866341361764}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.7258425568959085, 0.2741574431040915}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.8857534588059329, 0.11424654119406706}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[19] <= 397.08399963378906) {
                                        memcpy(var0, (const double[]){0.9991175570136208, 0.0008824429863791624}, 2 * sizeof(double));
                                    } else {
                                        if (input[6] <= 12.0) {
                                            memcpy(var0, (const double[]){0.9943675102453047, 0.00563248975469536}, 2 * sizeof(double));
                                        } else {
                                            if (input[18] <= 101657.0) {
                                                memcpy(var0, (const double[]){0.8443668907634994, 0.15563310923650067}, 2 * sizeof(double));
                                            } else {
                                                if (input[19] <= 794.3244934082031) {
                                                    memcpy(var0, (const double[]){0.9977235772357723, 0.0022764227642276423}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.7869641294838146, 0.21303587051618547}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                if (input[1] <= 4.5) {
                                    if (input[19] <= 262.3470001220703) {
                                        if (input[18] <= 67175.0) {
                                            if (input[19] <= 131.02349853515625) {
                                                if (input[18] <= 41737.5) {
                                                    memcpy(var0, (const double[]){0.9975550122249389, 0.0024449877750611247}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.154126213592233, 0.845873786407767}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.9990785432207109, 0.0009214567792891619}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[20] <= 124.5739974975586) {
                                                memcpy(var0, (const double[]){0.4025641025641026, 0.5974358974358974}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.11686046511627907, 0.8831395348837209}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.9999283718931309, 0.00007162810686913545}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[5] <= 1118.0) {
                                        if (input[10] <= 0.0) {
                                            if (input[12] <= 0.0014044950366951525) {
                                                memcpy(var0, (const double[]){0.5523414292230838, 0.4476585707769161}, 2 * sizeof(double));
                                            } else {
                                                if (input[8] <= 120.0) {
                                                    memcpy(var0, (const double[]){0.1065989847715736, 0.8934010152284264}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[9] <= 0.5072204768657684) {
                                            memcpy(var0, (const double[]){0.06373547382293039, 0.9362645261770696}, 2 * sizeof(double));
                                        } else {
                                            if (input[8] <= 1136.0) {
                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                            } else {
                                                if (input[8] <= 1952.0) {
                                                    if (input[10] <= 0.028880849480628967) {
                                                        memcpy(var0, (const double[]){0.13795268997278626, 0.8620473100272137}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[11] <= 1.0019550323486328) {
                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[9] <= 0.5361014902591705) {
                                                                if (input[9] <= 0.5342964828014374) {
                                                                    if (input[5] <= 1170.0) {
                                                                        if (input[12] <= 0.0013232900528237224) {
                                                                            memcpy(var0, (const double[]){0.22771750691342268, 0.7722824930865774}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.04718239413137713, 0.9528176058686229}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                if (input[8] <= 1200.0) {
                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[20] <= 2627.22509765625) {
                                                                        if (input[9] <= 0.5433215200901031) {
                                                                            memcpy(var0, (const double[]){0.103962195565249, 0.896037804434751}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[9] <= 0.5487364828586578) {
                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.415688452936103, 0.584311547063897}, 2 * sizeof(double));
                                                                            }
                                                                        }
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.6132312959419998, 0.3867687040580002}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.25769059295586266, 0.7423094070441373}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[18] <= 34280.5) {
                                if (input[3] <= 2.5) {
                                    if (input[19] <= 267.82000732421875) {
                                        if (input[18] <= 17139.5) {
                                            if (input[19] <= 133.87899780273438) {
                                                if (input[18] <= 12479.0) {
                                                    memcpy(var0, (const double[]){0.9923990498812352, 0.007600950118764846}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.2837938760268857, 0.7162061239731142}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.9953328742717863, 0.004667125728213704}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[1] <= 4.5) {
                                                memcpy(var0, (const double[]){0.9668002289639381, 0.03319977103606182}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.2724784810701551, 0.7275215189298448}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.995468985990313, 0.004531014009686996}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[12] <= 0.0014124599983915687) {
                                        if (input[12] <= 0.0014044850249774754) {
                                            if (input[11] <= 1.0007950067520142) {
                                                if (input[10] <= 0.0) {
                                                    if (input[8] <= 1104.0) {
                                                        if (input[12] <= 0.0009062335011549294) {
                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.24423337856173677, 0.7557666214382632}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.21659644113243026, 0.7834035588675697}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[11] <= 1.0013049840927124) {
                                                    if (input[8] <= 1140.0) {
                                                        memcpy(var0, (const double[]){0.19364716873410495, 0.8063528312658951}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[11] <= 1.0019550323486328) {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[12] <= -0.0012910149525851011) {
                                                            if (input[11] <= 1.0200650095939636) {
                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[11] <= 1.0243900418281555) {
                                                                    memcpy(var0, (const double[]){0.2190508706043018, 0.7809491293956982}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[12] <= -0.0013605149579234421) {
                                                                        if (input[11] <= 1.1080849766731262) {
                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[11] <= 1.1443549990653992) {
                                                                                memcpy(var0, (const double[]){0.23867529501332319, 0.7613247049866768}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[11] <= 1.301829993724823) {
                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[11] <= 1.376010000705719) {
                                                                                        memcpy(var0, (const double[]){0.23984808647385333, 0.7601519135261466}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.7716855857785393, 0.2283144142214607}, 2 * sizeof(double));
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (input[11] <= 1.055239975452423) {
                                                                            memcpy(var0, (const double[]){0.21946902654867256, 0.7805309734513274}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[12] <= -0.0013268899638205767) {
                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[11] <= 1.1909500360488892) {
                                                                                    memcpy(var0, (const double[]){0.23098125689084895, 0.7690187431091511}, 2 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.9909326424870466, 0.009067357512953367}, 2 * sizeof(double));
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            if (input[11] <= 1.0177749991416931) {
                                                                if (input[12] <= -0.0003596660098992288) {
                                                                    if (input[12] <= -0.0009681060037110001) {
                                                                        if (input[8] <= 1104.0) {
                                                                            if (input[10] <= -0.08303245157003403) {
                                                                                memcpy(var0, (const double[]){0.2159174649963154, 0.7840825350036846}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.16212634369017817, 0.8378736563098218}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    if (input[12] <= -0.00005013495137973223) {
                                                                        if (input[11] <= 1.0034549832344055) {
                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[12] <= -0.00015019650163594633) {
                                                                                memcpy(var0, (const double[]){0.20563121868604897, 0.7943687813139511}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[9] <= 0.5) {
                                                                                    memcpy(var0, (const double[]){0.21474086661002548, 0.7852591333899746}, 2 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (input[11] <= 1.0027300119400024) {
                                                                            memcpy(var0, (const double[]){0.21497502419122838, 0.7850249758087716}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[11] <= 1.0156599879264832) {
                                                                                if (input[12] <= 0.0009124345087911934) {
                                                                                    if (input[12] <= 0.00062924949452281) {
                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[11] <= 1.0045450329780579) {
                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var0, (const double[]){0.20526081141328578, 0.7947391885867142}, 2 * sizeof(double));
                                                                                        }
                                                                                    }
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.19945803084540498, 0.8005419691545951}, 2 * sizeof(double));
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[12] <= 0.001400945009663701) {
                                                                    if (input[12] <= -0.001280475000385195) {
                                                                        memcpy(var0, (const double[]){0.2314540059347181, 0.7685459940652819}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[11] <= 1.0374249815940857) {
                                                                            if (input[10] <= 0.12635400146245956) {
                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[10] <= 0.1462090015411377) {
                                                                                    if (input[12] <= -0.0009261105151381344) {
                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[10] <= 0.14079400151968002) {
                                                                                            if (input[11] <= 1.0224649906158447) {
                                                                                                memcpy(var0, (const double[]){0.20526506242084314, 0.7947349375791569}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                            }
                                                                                        } else {
                                                                                            memcpy(var0, (const double[]){0.19718765152739615, 0.8028123484726039}, 2 * sizeof(double));
                                                                                        }
                                                                                    }
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (input[12] <= 0.0013877100427635014) {
                                                                                if (input[12] <= -0.0012465000036172569) {
                                                                                    memcpy(var0, (const double[]){0.9973277909738717, 0.002672209026128266}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[11] <= 1.0398899912834167) {
                                                                                        if (input[12] <= 0.00007134448969736695) {
                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var0, (const double[]){0.2203160270880361, 0.7796839729119639}, 2 * sizeof(double));
                                                                                        }
                                                                                    } else {
                                                                                        if (input[11] <= 1.0442299842834473) {
                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            if (input[11] <= 1.1035500168800354) {
                                                                                                if (input[12] <= 0.0005609715008176863) {
                                                                                                    if (input[11] <= 1.093649983406067) {
                                                                                                        if (input[12] <= 0.0003596245078369975) {
                                                                                                            if (input[12] <= 0.00005017764851800166) {
                                                                                                                if (input[12] <= -0.0001626190060051158) {
                                                                                                                    if (input[5] <= 850.0) {
                                                                                                                        memcpy(var0, (const double[]){0.2379718726868986, 0.7620281273131014}, 2 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        if (input[10] <= -0.1913359984755516) {
                                                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            if (input[12] <= -0.00024950499937403947) {
                                                                                                                                if (input[12] <= -0.0009259649959858507) {
                                                                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                } else {
                                                                                                                                    memcpy(var0, (const double[]){0.28692870201096893, 0.7130712979890311}, 2 * sizeof(double));
                                                                                                                                }
                                                                                                                            } else {
                                                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                } else {
                                                                                                                    memcpy(var0, (const double[]){0.22616562282533054, 0.7738343771746694}, 2 * sizeof(double));
                                                                                                                }
                                                                                                            } else {
                                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                            }
                                                                                                        } else {
                                                                                                            memcpy(var0, (const double[]){0.22112570611855986, 0.7788742938814401}, 2 * sizeof(double));
                                                                                                        }
                                                                                                    } else {
                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                    }
                                                                                                } else {
                                                                                                    if (input[8] <= 840.0) {
                                                                                                        memcpy(var0, (const double[]){0.36802807913209956, 0.6319719208679004}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        if (input[10] <= 0.19675099849700928) {
                                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            if (input[8] <= 1342.0) {
                                                                                                                memcpy(var0, (const double[]){0.20471176155630913, 0.7952882384436909}, 2 * sizeof(double));
                                                                                                            } else {
                                                                                                                if (input[8] <= 1404.0) {
                                                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                } else {
                                                                                                                    memcpy(var0, (const double[]){0.2587749483826566, 0.7412250516173434}, 2 * sizeof(double));
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            } else {
                                                                                                if (input[12] <= 0.0013851199764758348) {
                                                                                                    if (input[11] <= 1.1389000415802002) {
                                                                                                        if (input[9] <= 0.642599493265152) {
                                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            if (input[8] <= 1446.0) {
                                                                                                                memcpy(var0, (const double[]){0.45180341700063276, 0.5481965829993672}, 2 * sizeof(double));
                                                                                                            } else {
                                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                            }
                                                                                                        }
                                                                                                    } else {
                                                                                                        if (input[12] <= -0.0012404900044202805) {
                                                                                                            memcpy(var0, (const double[]){0.2278904453272005, 0.7721095546727995}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            if (input[11] <= 1.151599943637848) {
                                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                            } else {
                                                                                                                if (input[15] <= 6270.5) {
                                                                                                                    if (input[12] <= 0.0013639699900522828) {
                                                                                                                        if (input[12] <= -0.0011956999660469592) {
                                                                                                                            memcpy(var0, (const double[]){0.886071491459764, 0.11392850854023595}, 2 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            if (input[12] <= -0.001188925001770258) {
                                                                                                                                memcpy(var0, (const double[]){0.2635494155154091, 0.7364505844845909}, 2 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                if (input[12] <= 0.001349525002297014) {
                                                                                                                                    if (input[12] <= 0.0013333950191736221) {
                                                                                                                                        memcpy(var0, (const double[]){0.6505945105011668, 0.3494054894988332}, 2 * sizeof(double));
                                                                                                                                    } else {
                                                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                    }
                                                                                                                                } else {
                                                                                                                                    if (input[5] <= 586.0) {
                                                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                    } else {
                                                                                                                                        memcpy(var0, (const double[]){0.25578925005311237, 0.7442107499468876}, 2 * sizeof(double));
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    } else {
                                                                                                                        memcpy(var0, (const double[]){0.8935630099728015, 0.10643699002719854}, 2 * sizeof(double));
                                                                                                                    }
                                                                                                                } else {
                                                                                                                    memcpy(var0, (const double[]){0.522203645557232, 0.477796354442768}, 2 * sizeof(double));
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                } else {
                                                                                                    memcpy(var0, (const double[]){0.2421195126667956, 0.7578804873332045}, 2 * sizeof(double));
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.9978870004593478, 0.0021129995406522738}, 2 * sizeof(double));
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.2116965753914349, 0.7883034246085651}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.9991141976402225, 0.0008858023597774864}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[12] <= 0.001414234982803464) {
                                            memcpy(var0, (const double[]){0.1870225604137562, 0.8129774395862438}, 2 * sizeof(double));
                                        } else {
                                            if (input[12] <= 0.0014168950146995485) {
                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.20729064039408868, 0.7927093596059114}, 2 * sizeof(double));
                                            }
                                        }
                                    }
                                }
                            } else {
                                if (input[19] <= 535.6369934082031) {
                                    if (input[3] <= 1.5) {
                                        if (input[25] <= 24.75670051574707) {
                                            memcpy(var0, (const double[]){0.7934685088821102, 0.20653149111788982}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.42807073442727417, 0.5719292655727258}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[17] <= 4510.5) {
                                            memcpy(var0, (const double[]){0.1917070825319843, 0.8082929174680157}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.3087643085899103, 0.6912356914100898}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[18] <= 68569.0) {
                                        if (input[1] <= 5.5) {
                                            memcpy(var0, (const double[]){0.995371210746052, 0.004628789253948085}, 2 * sizeof(double));
                                        } else {
                                            if (input[15] <= 10209.5) {
                                                if (input[10] <= 0.039711249992251396) {
                                                    if (input[8] <= 1140.0) {
                                                        if (input[9] <= 0.5126354992389679) {
                                                            if (input[12] <= 0.0014134100056253374) {
                                                                if (input[5] <= 1106.0) {
                                                                    if (input[12] <= 0.0014044950366951525) {
                                                                        if (input[12] <= 0.0014027800061739981) {
                                                                            if (input[12] <= 0.0013877099845558405) {
                                                                                if (input[12] <= 0.0013851199764758348) {
                                                                                    if (input[10] <= -0.11913400143384933) {
                                                                                        if (input[11] <= 1.0212100148200989) {
                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            if (input[5] <= 958.0) {
                                                                                                if (input[10] <= -0.15884499996900558) {
                                                                                                    if (input[9] <= 0.41877248883247375) {
                                                                                                        if (input[11] <= 1.0382300019264221) {
                                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            if (input[11] <= 1.0398899912834167) {
                                                                                                                memcpy(var0, (const double[]){0.24079189686924493, 0.759208103130755}, 2 * sizeof(double));
                                                                                                            } else {
                                                                                                                memcpy(var0, (const double[]){0.6789945962024689, 0.3210054037975311}, 2 * sizeof(double));
                                                                                                            }
                                                                                                        }
                                                                                                    } else {
                                                                                                        memcpy(var0, (const double[]){0.24349680170575694, 0.7565031982942431}, 2 * sizeof(double));
                                                                                                    }
                                                                                                } else {
                                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                }
                                                                                            } else {
                                                                                                memcpy(var0, (const double[]){0.2299541809851088, 0.7700458190148912}, 2 * sizeof(double));
                                                                                            }
                                                                                        }
                                                                                    } else {
                                                                                        if (input[8] <= 980.0) {
                                                                                            memcpy(var0, (const double[]){0.21381801761119892, 0.7861819823888011}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            if (input[12] <= -0.0013566850102506578) {
                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                if (input[11] <= 1.014174997806549) {
                                                                                                    if (input[9] <= 0.449458509683609) {
                                                                                                        memcpy(var0, (const double[]){0.21627188465499486, 0.7837281153450052}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        if (input[5] <= 1004.0) {
                                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            if (input[8] <= 1012.0) {
                                                                                                                memcpy(var0, (const double[]){0.2158046731425571, 0.7841953268574429}, 2 * sizeof(double));
                                                                                                            } else {
                                                                                                                if (input[11] <= 1.007140040397644) {
                                                                                                                    if (input[12] <= 0.0004793685075128451) {
                                                                                                                        if (input[12] <= -0.00007519345308537595) {
                                                                                                                            if (input[10] <= -0.07220214977860451) {
                                                                                                                                memcpy(var0, (const double[]){0.22656934306569343, 0.7734306569343066}, 2 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                if (input[11] <= 1.0013049840927124) {
                                                                                                                                    if (input[12] <= -0.0004602933877322357) {
                                                                                                                                        memcpy(var0, (const double[]){0.374488256841198, 0.625511743158802}, 2 * sizeof(double));
                                                                                                                                    } else {
                                                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                    }
                                                                                                                                } else {
                                                                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                }
                                                                                                                            }
                                                                                                                        } else {
                                                                                                                            memcpy(var0, (const double[]){0.2129822732012513, 0.7870177267987487}, 2 * sizeof(double));
                                                                                                                        }
                                                                                                                    } else {
                                                                                                                        if (input[12] <= 0.0011199599830433726) {
                                                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            if (input[12] <= 0.0011914899805560708) {
                                                                                                                                memcpy(var0, (const double[]){0.28432327166504384, 0.7156767283349562}, 2 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                } else {
                                                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                } else {
                                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.25227410551849605, 0.747725894481504}, 2 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.2193976236529428, 0.7806023763470572}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.2166446499339498, 0.7833553500660502}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.156794425087108, 0.8432055749128919}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[10] <= 0.04332130029797554) {
                                                        memcpy(var0, (const double[]){0.14733711814003786, 0.8526628818599622}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[8] <= 1168.0) {
                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[9] <= 0.5288805067539215) {
                                                                memcpy(var0, (const double[]){0.13064516129032258, 0.8693548387096774}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[8] <= 1184.0) {
                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[5] <= 1186.0) {
                                                                        memcpy(var0, (const double[]){0.14658753709198813, 0.8534124629080119}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.6255909621170258, 0.37440903788297414}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.5307030893319129, 0.46929691066808704}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        if (input[3] <= 1.5) {
                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.23021795513491378, 0.7697820448650863}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[6] <= 24.0) {
                        if (input[1] <= 4.5) {
                            memcpy(var0, (const double[]){0.2337618403247632, 0.7662381596752368}, 2 * sizeof(double));
                        } else {
                            memcpy(var0, (const double[]){0.9950132894570307, 0.004986710542969244}, 2 * sizeof(double));
                        }
                    } else {
                        if (input[19] <= 525.3259887695312) {
                            memcpy(var0, (const double[]){0.10808730059262707, 0.8919126994073729}, 2 * sizeof(double));
                        } else {
                            if (input[18] <= 254162.0) {
                                if (input[3] <= 2.5) {
                                    memcpy(var0, (const double[]){0.999341129962115, 0.0006588700378850271}, 2 * sizeof(double));
                                } else {
                                    if (input[10] <= 0.039711249992251396) {
                                        memcpy(var0, (const double[]){0.5278336445912943, 0.47216635540870566}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.2932163598171259, 0.7067836401828741}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                memcpy(var0, (const double[]){0.10919577058635054, 0.8908042294136495}, 2 * sizeof(double));
                            }
                        }
                    }
                }
            } else {
                if (input[15] <= 3611.5) {
                    if (input[18] <= 65151.5) {
                        if (input[11] <= 1.0000100135803223) {
                            memcpy(var0, (const double[]){0.29454338175599815, 0.7054566182440019}, 2 * sizeof(double));
                        } else {
                            if (input[11] <= 1.0001999735832214) {
                                memcpy(var0, (const double[]){0.9825969786684886, 0.017403021331511424}, 2 * sizeof(double));
                            } else {
                                if (input[11] <= 1.0003299713134766) {
                                    if (input[2] <= 2.5) {
                                        if (input[6] <= 6.0) {
                                            memcpy(var0, (const double[]){0.9885098108538094, 0.011490189146190561}, 2 * sizeof(double));
                                        } else {
                                            if (input[6] <= 12.0) {
                                                memcpy(var0, (const double[]){0.6164095371669004, 0.38359046283309955}, 2 * sizeof(double));
                                            } else {
                                                if (input[3] <= 2.5) {
                                                    memcpy(var0, (const double[]){0.9420018709073901, 0.057998129092609915}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.2040457343887423, 0.7959542656112577}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    } else {
                                        if (input[24] <= 2045.9400024414062) {
                                            memcpy(var0, (const double[]){0.29239472603677175, 0.7076052739632283}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.9963503649635036, 0.0036496350364963502}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[11] <= 1.0009099841117859) {
                                        memcpy(var0, (const double[]){0.9814904733233631, 0.01850952667663682}, 2 * sizeof(double));
                                    } else {
                                        if (input[11] <= 1.001164972782135) {
                                            if (input[0] <= 29.5) {
                                                if (input[15] <= 859.5) {
                                                    memcpy(var0, (const double[]){0.41695282848364357, 0.5830471715163564}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.2370221749741716, 0.7629778250258283}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.3814270531755048, 0.6185729468244952}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[11] <= 1.0021350383758545) {
                                                memcpy(var0, (const double[]){0.9811490410553152, 0.018850958944684814}, 2 * sizeof(double));
                                            } else {
                                                if (input[11] <= 1.0025200247764587) {
                                                    if (input[2] <= 2.5) {
                                                        if (input[6] <= 6.0) {
                                                            memcpy(var0, (const double[]){0.992827175531195, 0.0071728244688049805}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[6] <= 12.0) {
                                                                memcpy(var0, (const double[]){0.623526396719631, 0.37647360328036905}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[3] <= 2.5) {
                                                                    memcpy(var0, (const double[]){0.9252873563218391, 0.07471264367816093}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.24284562676340185, 0.7571543732365982}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.29323368179500253, 0.7067663182049975}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[1] <= 4.5) {
                                                        if (input[19] <= 254.44900512695312) {
                                                            if (input[18] <= 32648.0) {
                                                                memcpy(var0, (const double[]){0.9793361480108468, 0.020663851989153194}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[2] <= 2.5) {
                                                                    if (input[6] <= 12.0) {
                                                                        memcpy(var0, (const double[]){0.34115674769488685, 0.6588432523051132}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.9766683573654084, 0.023331642634591695}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.16787699988653126, 0.8321230001134687}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[11] <= 1.0038800239562988) {
                                                            memcpy(var0, (const double[]){0.9867052272629171, 0.013294772737082919}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[11] <= 1.0043950080871582) {
                                                                memcpy(var0, (const double[]){0.292049372700142, 0.707950627299858}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[11] <= 1.0061500072479248) {
                                                                    memcpy(var0, (const double[]){0.9757889959502862, 0.024211004049713727}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[11] <= 1.0067999958992004) {
                                                                        if (input[2] <= 2.5) {
                                                                            if (input[6] <= 6.0) {
                                                                                memcpy(var0, (const double[]){0.9952226582494454, 0.004777341750554513}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[6] <= 12.0) {
                                                                                    memcpy(var0, (const double[]){0.601337279403705, 0.3986627205962951}, 2 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.22046073817190984, 0.7795392618280902}, 2 * sizeof(double));
                                                                                }
                                                                            }
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.2950610421427542, 0.7049389578572458}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        if (input[24] <= 2045.6849975585938) {
                                                                            if (input[11] <= 1.0089499950408936) {
                                                                                memcpy(var0, (const double[]){0.9866629773104594, 0.013337022689540675}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[11] <= 1.009730041027069) {
                                                                                    memcpy(var0, (const double[]){0.2957990172330265, 0.7042009827669735}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[11] <= 1.0122900009155273) {
                                                                                        memcpy(var0, (const double[]){0.9791908735607902, 0.020809126439209888}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[11] <= 1.0132099986076355) {
                                                                                            if (input[2] <= 2.5) {
                                                                                                if (input[6] <= 6.0) {
                                                                                                    memcpy(var0, (const double[]){0.9898223907403711, 0.010177609259628817}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    if (input[6] <= 12.0) {
                                                                                                        memcpy(var0, (const double[]){0.5935323383084578, 0.4064676616915423}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        memcpy(var0, (const double[]){0.23731931668856768, 0.7626806833114324}, 2 * sizeof(double));
                                                                                                    }
                                                                                                }
                                                                                            } else {
                                                                                                memcpy(var0, (const double[]){0.288657380311366, 0.711342619688634}, 2 * sizeof(double));
                                                                                            }
                                                                                        } else {
                                                                                            if (input[11] <= 1.0161700248718262) {
                                                                                                memcpy(var0, (const double[]){0.9805810090740864, 0.01941899092591354}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                if (input[11] <= 1.0172300338745117) {
                                                                                                    memcpy(var0, (const double[]){0.3010317752157643, 0.6989682247842357}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    if (input[11] <= 1.0206149816513062) {
                                                                                                        memcpy(var0, (const double[]){0.9831419432646427, 0.016858056735357348}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        if (input[11] <= 1.021815001964569) {
                                                                                                            if (input[2] <= 2.5) {
                                                                                                                if (input[6] <= 6.0) {
                                                                                                                    memcpy(var0, (const double[]){0.9941967818517542, 0.005803218148245845}, 2 * sizeof(double));
                                                                                                                } else {
                                                                                                                    memcpy(var0, (const double[]){0.4580111683848797, 0.5419888316151202}, 2 * sizeof(double));
                                                                                                                }
                                                                                                            } else {
                                                                                                                memcpy(var0, (const double[]){0.3024126198577173, 0.6975873801422827}, 2 * sizeof(double));
                                                                                                            }
                                                                                                        } else {
                                                                                                            if (input[11] <= 1.0256250500679016) {
                                                                                                                memcpy(var0, (const double[]){0.9766801934515538, 0.023319806548446273}, 2 * sizeof(double));
                                                                                                            } else {
                                                                                                                if (input[15] <= 891.5) {
                                                                                                                    if (input[11] <= 1.0269700288772583) {
                                                                                                                        memcpy(var0, (const double[]){0.39757837120583844, 0.6024216287941615}, 2 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        if (input[11] <= 1.031220018863678) {
                                                                                                                            memcpy(var0, (const double[]){0.9875218033006843, 0.012478196699315712}, 2 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            if (input[15] <= 536.5) {
                                                                                                                                memcpy(var0, (const double[]){0.8170050660177909, 0.1829949339822091}, 2 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                memcpy(var0, (const double[]){0.7189504484326302, 0.2810495515673697}, 2 * sizeof(double));
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                } else {
                                                                                                                    if (input[11] <= 1.0269700288772583) {
                                                                                                                        memcpy(var0, (const double[]){0.2938854818143178, 0.7061145181856822}, 2 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        if (input[11] <= 1.031220018863678) {
                                                                                                                            memcpy(var0, (const double[]){0.9805029013539652, 0.019497098646034817}, 2 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            if (input[0] <= 29.5) {
                                                                                                                                if (input[11] <= 1.0327150225639343) {
                                                                                                                                    memcpy(var0, (const double[]){0.3332643915891072, 0.6667356084108927}, 2 * sizeof(double));
                                                                                                                                } else {
                                                                                                                                    if (input[18] <= 27831.5) {
                                                                                                                                        if (input[6] <= 6.0) {
                                                                                                                                            if (input[11] <= 1.037410020828247) {
                                                                                                                                                memcpy(var0, (const double[]){0.9997650927883486, 0.0002349072116513977}, 2 * sizeof(double));
                                                                                                                                            } else {
                                                                                                                                                if (input[2] <= 2.5) {
                                                                                                                                                    memcpy(var0, (const double[]){0.9857142857142858, 0.014285714285714285}, 2 * sizeof(double));
                                                                                                                                                } else {
                                                                                                                                                    if (input[11] <= 1.039055049419403) {
                                                                                                                                                        memcpy(var0, (const double[]){0.26732673267326734, 0.7326732673267327}, 2 * sizeof(double));
                                                                                                                                                    } else {
                                                                                                                                                        if (input[11] <= 1.044219970703125) {
                                                                                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                                        } else {
                                                                                                                                                            if (input[11] <= 1.046019971370697) {
                                                                                                                                                                memcpy(var0, (const double[]){0.265790506080816, 0.734209493919184}, 2 * sizeof(double));
                                                                                                                                                            } else {
                                                                                                                                                                if (input[1] <= 5.5) {
                                                                                                                                                                    memcpy(var0, (const double[]){0.41776573750623797, 0.582234262493762}, 2 * sizeof(double));
                                                                                                                                                                } else {
                                                                                                                                                                    if (input[11] <= 1.0516600012779236) {
                                                                                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                                                    } else {
                                                                                                                                                                        if (input[11] <= 1.0536199808120728) {
                                                                                                                                                                            memcpy(var0, (const double[]){0.29277566539923955, 0.7072243346007605}, 2 * sizeof(double));
                                                                                                                                                                        } else {
                                                                                                                                                                            if (input[11] <= 1.0597549676895142) {
                                                                                                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                                                            } else {
                                                                                                                                                                                if (input[11] <= 1.0618849992752075) {
                                                                                                                                                                                    memcpy(var0, (const double[]){0.2676163825998474, 0.7323836174001527}, 2 * sizeof(double));
                                                                                                                                                                                } else {
                                                                                                                                                                                    if (input[11] <= 1.0685399770736694) {
                                                                                                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                                                                    } else {
                                                                                                                                                                                        if (input[11] <= 1.0708400011062622) {
                                                                                                                                                                                            memcpy(var0, (const double[]){0.2806916426512968, 0.7193083573487031}, 2 * sizeof(double));
                                                                                                                                                                                        } else {
                                                                                                                                                                                            if (input[11] <= 1.0780199766159058) {
                                                                                                                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                                                                            } else {
                                                                                                                                                                                                if (input[11] <= 1.0805050134658813) {
                                                                                                                                                                                                    memcpy(var0, (const double[]){0.27225274725274723, 0.7277472527472527}, 2 * sizeof(double));
                                                                                                                                                                                                } else {
                                                                                                                                                                                                    if (input[11] <= 1.0882350206375122) {
                                                                                                                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                                                                                    } else {
                                                                                                                                                                                                        memcpy(var0, (const double[]){0.5895449372017332, 0.4104550627982668}, 2 * sizeof(double));
                                                                                                                                                                                                    }
                                                                                                                                                                                                }
                                                                                                                                                                                            }
                                                                                                                                                                                        }
                                                                                                                                                                                    }
                                                                                                                                                                                }
                                                                                                                                                                            }
                                                                                                                                                                        }
                                                                                                                                                                    }
                                                                                                                                                                }
                                                                                                                                                            }
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                        } else {
                                                                                                                                            if (input[19] <= 217.32400512695312) {
                                                                                                                                                if (input[18] <= 14153.0) {
                                                                                                                                                    memcpy(var0, (const double[]){0.9986138064873856, 0.0013861935126143609}, 2 * sizeof(double));
                                                                                                                                                } else {
                                                                                                                                                    memcpy(var0, (const double[]){0.43194399218495605, 0.568056007815044}, 2 * sizeof(double));
                                                                                                                                                }
                                                                                                                                            } else {
                                                                                                                                                memcpy(var0, (const double[]){0.9998903749177812, 0.00010962508221881167}, 2 * sizeof(double));
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    } else {
                                                                                                                                        if (input[3] <= 2.5) {
                                                                                                                                            if (input[19] <= 435.0625) {
                                                                                                                                                memcpy(var0, (const double[]){0.3243489747138005, 0.6756510252861995}, 2 * sizeof(double));
                                                                                                                                            } else {
                                                                                                                                                if (input[18] <= 55843.0) {
                                                                                                                                                    if (input[6] <= 6.0) {
                                                                                                                                                        memcpy(var0, (const double[]){0.4273220747889023, 0.5726779252110977}, 2 * sizeof(double));
                                                                                                                                                    } else {
                                                                                                                                                        memcpy(var0, (const double[]){0.9974560592044404, 0.002543940795559667}, 2 * sizeof(double));
                                                                                                                                                    }
                                                                                                                                                } else {
                                                                                                                                                    memcpy(var0, (const double[]){0.3821048771543821, 0.6178951228456179}, 2 * sizeof(double));
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                        } else {
                                                                                                                                            if (input[11] <= 1.037410020828247) {
                                                                                                                                                memcpy(var0, (const double[]){0.923728813559322, 0.07627118644067797}, 2 * sizeof(double));
                                                                                                                                            } else {
                                                                                                                                                if (input[6] <= 6.0) {
                                                                                                                                                    if (input[2] <= 2.5) {
                                                                                                                                                        memcpy(var0, (const double[]){0.9982083439979524, 0.0017916560020476069}, 2 * sizeof(double));
                                                                                                                                                    } else {
                                                                                                                                                        memcpy(var0, (const double[]){0.583194119612429, 0.416805880387571}, 2 * sizeof(double));
                                                                                                                                                    }
                                                                                                                                                } else {
                                                                                                                                                    if (input[15] <= 2153.5) {
                                                                                                                                                        memcpy(var0, (const double[]){0.6085323992994746, 0.3914676007005254}, 2 * sizeof(double));
                                                                                                                                                    } else {
                                                                                                                                                        if (input[20] <= 346.8489990234375) {
                                                                                                                                                            memcpy(var0, (const double[]){0.334375, 0.665625}, 2 * sizeof(double));
                                                                                                                                                        } else {
                                                                                                                                                            memcpy(var0, (const double[]){0.5891854539172497, 0.41081454608275025}, 2 * sizeof(double));
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            } else {
                                                                                                                                if (input[11] <= 1.0327150225639343) {
                                                                                                                                    memcpy(var0, (const double[]){0.48304988015066774, 0.5169501198493323}, 2 * sizeof(double));
                                                                                                                                } else {
                                                                                                                                    if (input[11] <= 1.037410020828247) {
                                                                                                                                        memcpy(var0, (const double[]){0.9890596509507684, 0.01094034904923157}, 2 * sizeof(double));
                                                                                                                                    } else {
                                                                                                                                        if (input[11] <= 1.039055049419403) {
                                                                                                                                            memcpy(var0, (const double[]){0.37080895990868884, 0.6291910400913112}, 2 * sizeof(double));
                                                                                                                                        } else {
                                                                                                                                            if (input[11] <= 1.044219970703125) {
                                                                                                                                                memcpy(var0, (const double[]){0.9912498177045355, 0.008750182295464488}, 2 * sizeof(double));
                                                                                                                                            } else {
                                                                                                                                                if (input[11] <= 1.046019971370697) {
                                                                                                                                                    memcpy(var0, (const double[]){0.4717839374555792, 0.5282160625444208}, 2 * sizeof(double));
                                                                                                                                                } else {
                                                                                                                                                    if (input[11] <= 1.0516600012779236) {
                                                                                                                                                        memcpy(var0, (const double[]){0.9921223354958295, 0.007877664504170528}, 2 * sizeof(double));
                                                                                                                                                    } else {
                                                                                                                                                        if (input[15] <= 2311.5) {
                                                                                                                                                            memcpy(var0, (const double[]){0.7333018087244355, 0.2666981912755645}, 2 * sizeof(double));
                                                                                                                                                        } else {
                                                                                                                                                            if (input[11] <= 1.0536199808120728) {
                                                                                                                                                                memcpy(var0, (const double[]){0.34948842218632203, 0.650511577813678}, 2 * sizeof(double));
                                                                                                                                                            } else {
                                                                                                                                                                if (input[11] <= 1.0597549676895142) {
                                                                                                                                                                    memcpy(var0, (const double[]){0.9887307236061684, 0.011269276393831554}, 2 * sizeof(double));
                                                                                                                                                                } else {
                                                                                                                                                                    memcpy(var0, (const double[]){0.6500548772122376, 0.3499451227877624}, 2 * sizeof(double));
                                                                                                                                                                }
                                                                                                                                                            }
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.9930514968504448, 0.006948503149555166}, 2 * sizeof(double));
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[2] <= 2.5) {
                            if (input[6] <= 12.0) {
                                if (input[3] <= 2.5) {
                                    if (input[24] <= 509.6094970703125) {
                                        memcpy(var0, (const double[]){0.3425965210012728, 0.6574034789987272}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.9789251844046365, 0.02107481559536354}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[24] <= 510.1094970703125) {
                                        if (input[19] <= 508.9960021972656) {
                                            memcpy(var0, (const double[]){0.9988194529620998, 0.0011805470379001595}, 2 * sizeof(double));
                                        } else {
                                            if (input[18] <= 119134.0) {
                                                if (input[6] <= 6.0) {
                                                    memcpy(var0, (const double[]){0.9961013645224172, 0.003898635477582846}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.6237845923709798, 0.37621540762902017}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.9973777861022664, 0.002622213897733658}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        if (input[6] <= 6.0) {
                                            memcpy(var0, (const double[]){0.9967799066172919, 0.0032200933827080985}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.6464211076280042, 0.3535788923719958}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[18] <= 238730.0) {
                                    if (input[15] <= 1528.5) {
                                        if (input[14] <= 1221.0) {
                                            memcpy(var0, (const double[]){0.7297970808116767, 0.27020291918832323}, 2 * sizeof(double));
                                        } else {
                                            if (input[11] <= 6.9422547817230225) {
                                                if (input[3] <= 2.5) {
                                                    if (input[24] <= 254.43000030517578) {
                                                        if (input[19] <= 465.9514923095703) {
                                                            if (input[18] <= 114878.5) {
                                                                if (input[19] <= 224.34749603271484) {
                                                                    memcpy(var0, (const double[]){0.3511705685618729, 0.6488294314381271}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.99329702555509, 0.006702974444909929}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.2891566265060241, 0.7108433734939759}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.9879227053140096, 0.012077294685990338}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.978502080443828, 0.021497919556171984}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[9] <= 0.6308664977550507) {
                                                        memcpy(var0, (const double[]){0.5553649201530949, 0.4446350798469051}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.8840378197997776, 0.11596218020022248}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.3775033377837116, 0.6224966622162884}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        if (input[0] <= 29.5) {
                                            if (input[3] <= 1.5) {
                                                memcpy(var0, (const double[]){0.9527863777089783, 0.04721362229102167}, 2 * sizeof(double));
                                            } else {
                                                if (input[18] <= 84479.5) {
                                                    if (input[1] <= 4.5) {
                                                        if (input[19] <= 209.68250274658203) {
                                                            memcpy(var0, (const double[]){0.18578352180936994, 0.81421647819063}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.9973163367997316, 0.0026836632002683663}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[15] <= 2137.5) {
                                                            memcpy(var0, (const double[]){0.5212913924998662, 0.4787086075001337}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[20] <= 108.55799865722656) {
                                                                memcpy(var0, (const double[]){0.25854443104141533, 0.7414555689585847}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.44161059018201876, 0.5583894098179812}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (input[6] <= 24.0) {
                                                        if (input[3] <= 2.5) {
                                                            memcpy(var0, (const double[]){0.9019480519480519, 0.09805194805194806}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.40482075434977227, 0.5951792456502277}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[19] <= 465.9219970703125) {
                                                            if (input[24] <= 255.93000030517578) {
                                                                memcpy(var0, (const double[]){0.18732952685747536, 0.8126704731425246}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.9995126705653021, 0.0004873294346978557}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[9] <= 0.8808659911155701) {
                                                if (input[18] <= 116110.5) {
                                                    if (input[1] <= 4.5) {
                                                        if (input[19] <= 226.72449493408203) {
                                                            memcpy(var0, (const double[]){0.30130220026942073, 0.6986977997305792}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.9939478584729982, 0.006052141527001862}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.6092734134661127, 0.3907265865338873}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[19] <= 453.5899963378906) {
                                                        memcpy(var0, (const double[]){0.2573020428836738, 0.7426979571163261}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.5749722911278831, 0.42502770887211694}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.47772743116068317, 0.5222725688393168}, 2 * sizeof(double));
                                            }
                                        }
                                    }
                                } else {
                                    if (input[3] <= 1.5) {
                                        if (input[20] <= 287.43450927734375) {
                                            memcpy(var0, (const double[]){0.6375076734192756, 0.3624923265807244}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.13925049309664694, 0.8607495069033531}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.16336770138391135, 0.8366322986160887}, 2 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if (input[19] <= 508.4669952392578) {
                                memcpy(var0, (const double[]){0.08073074081536705, 0.919269259184633}, 2 * sizeof(double));
                            } else {
                                if (input[18] <= 130236.0) {
                                    if (input[6] <= 12.0) {
                                        if (input[6] <= 6.0) {
                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.32476851162652215, 0.6752314883734778}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var0, (const double[]){0.10038831243236361, 0.8996116875676364}, 2 * sizeof(double));
                                }
                            }
                        }
                    }
                } else {
                    if (input[24] <= 2028.4400024414062) {
                        if (input[3] <= 2.5) {
                            if (input[18] <= 26354.5) {
                                if (input[6] <= 6.0) {
                                    if (input[19] <= 411.74200439453125) {
                                        memcpy(var0, (const double[]){0.2786065207682001, 0.7213934792317999}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.9989423585404548, 0.0010576414595452142}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[19] <= 205.87100219726562) {
                                        if (input[1] <= 4.5) {
                                            memcpy(var0, (const double[]){0.9998102466793168, 0.00018975332068311195}, 2 * sizeof(double));
                                        } else {
                                            if (input[18] <= 13200.0) {
                                                memcpy(var0, (const double[]){0.9997129186602871, 0.00028708133971291867}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.1703648471447304, 0.8296351528552696}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.999967888337044, 0.00003211166295598561}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[2] <= 2.5) {
                                    if (input[24] <= 255.30449676513672) {
                                        if (input[18] <= 73586.5) {
                                            if (input[19] <= 143.62799835205078) {
                                                if (input[18] <= 44102.0) {
                                                    memcpy(var0, (const double[]){0.9985528219971056, 0.001447178002894356}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.20908273381294964, 0.7909172661870504}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.9969811735001921, 0.003018826499807893}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[6] <= 24.0) {
                                                if (input[18] <= 239265.0) {
                                                    memcpy(var0, (const double[]){0.8780710775911325, 0.12192892240886756}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.10991379310344827, 0.8900862068965517}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[3] <= 1.5) {
                                                    if (input[25] <= 23.307499885559082) {
                                                        memcpy(var0, (const double[]){0.9195182042157131, 0.0804817957842869}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.3966977138018628, 0.6033022861981372}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[18] <= 110930.5) {
                                                        if (input[19] <= 216.61699676513672) {
                                                            memcpy(var0, (const double[]){0.18307420847621267, 0.8169257915237873}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.9996730957829356, 0.00032690421706440013}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[9] <= 0.5054149925708771) {
                                                            memcpy(var0, (const double[]){0.25285609991910185, 0.7471439000808981}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.10990285768178817, 0.8900971423182118}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.9918736037815262, 0.008126396218473792}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[24] <= 1011.7200012207031) {
                                        if (input[19] <= 411.52349853515625) {
                                            if (input[0] <= 34.5) {
                                                memcpy(var0, (const double[]){0.1401972705449503, 0.8598027294550497}, 2 * sizeof(double));
                                            } else {
                                                if (input[17] <= 6503.5) {
                                                    if (input[18] <= 52721.0) {
                                                        memcpy(var0, (const double[]){0.3461642512077295, 0.6538357487922706}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.14631589980085946, 0.8536841001991405}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.16138828633405639, 0.8386117136659436}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            if (input[18] <= 52683.5) {
                                                if (input[6] <= 6.0) {
                                                    memcpy(var0, (const double[]){0.29759570735734187, 0.7024042926426581}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.999947201689546, 0.00005279831045406547}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[20] <= 62.94565010070801) {
                                                    memcpy(var0, (const double[]){0.9007009345794392, 0.09929906542056074}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.1745995641226381, 0.8254004358773619}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    } else {
                                        if (input[6] <= 6.0) {
                                            memcpy(var0, (const double[]){0.30914786967418545, 0.6908521303258145}, 2 * sizeof(double));
                                        } else {
                                            if (input[19] <= 411.78900146484375) {
                                                memcpy(var0, (const double[]){0.23229461756373937, 0.7677053824362606}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.9858534684333593, 0.014146531566640686}, 2 * sizeof(double));
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[6] <= 12.0) {
                                if (input[18] <= 57448.5) {
                                    if (input[15] <= 9654.5) {
                                        if (input[1] <= 5.5) {
                                            if (input[6] <= 6.0) {
                                                memcpy(var0, (const double[]){0.9995442426452157, 0.0004557573547843128}, 2 * sizeof(double));
                                            } else {
                                                if (input[20] <= 1172.6699829101562) {
                                                    if (input[24] <= 499.8594970703125) {
                                                        if (input[18] <= 32975.0) {
                                                            memcpy(var0, (const double[]){0.29796146327841383, 0.7020385367215861}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[19] <= 258.0039978027344) {
                                                                memcpy(var0, (const double[]){0.9997530864197531, 0.0002469135802469136}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.2057877813504823, 0.7942122186495176}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.24397102684277802, 0.756028973157222}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[11] <= 1.0000100135803223) {
                                                        memcpy(var0, (const double[]){0.1882513661202186, 0.8117486338797815}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[11] <= 1.0001999735832214) {
                                                            memcpy(var0, (const double[]){0.9249381358262304, 0.07506186417376959}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[17] <= 4948.5) {
                                                                memcpy(var0, (const double[]){0.6694249241132687, 0.33057507588673124}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[25] <= 51.3932991027832) {
                                                                    memcpy(var0, (const double[]){0.4145230867550727, 0.5854769132449273}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.5895663104965431, 0.41043368950345693}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[20] <= 4865.880126953125) {
                                                if (input[16] <= 4863.0) {
                                                    memcpy(var0, (const double[]){0.5150545026023765, 0.4849454973976235}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.3166322139008438, 0.6833677860991562}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[15] <= 5859.5) {
                                                    if (input[17] <= 1977.5) {
                                                        memcpy(var0, (const double[]){0.3595166163141994, 0.6404833836858006}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[22] <= 56772.0) {
                                                            if (input[22] <= 9988.0) {
                                                                if (input[17] <= 3515.5) {
                                                                    memcpy(var0, (const double[]){0.49318614389036924, 0.5068138561096308}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.6211409294900756, 0.3788590705099244}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                if (input[20] <= 14992.75) {
                                                                    memcpy(var0, (const double[]){0.8449619726959233, 0.1550380273040767}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[22] <= 50556.0) {
                                                                        if (input[22] <= 14764.0) {
                                                                            memcpy(var0, (const double[]){0.5097162844928099, 0.4902837155071901}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.8501529051987767, 0.14984709480122324}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.5127732177441667, 0.48722678225583327}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.5466770080953997, 0.45332299190460035}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    if (input[20] <= 11058.39990234375) {
                                                        if (input[17] <= 6334.5) {
                                                            memcpy(var0, (const double[]){0.4454779936340687, 0.5545220063659313}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.24773512086126345, 0.7522648791387365}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[22] <= 50124.0) {
                                                            if (input[22] <= 14660.0) {
                                                                memcpy(var0, (const double[]){0.5174428009130286, 0.48255719908697137}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[25] <= 194.22100067138672) {
                                                                    memcpy(var0, (const double[]){0.9053904521024344, 0.09460954789756561}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[22] <= 43252.0) {
                                                                        if (input[22] <= 18476.0) {
                                                                            memcpy(var0, (const double[]){0.382699868938401, 0.617300131061599}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.8865396692484823, 0.1134603307515177}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.36348751534997953, 0.6365124846500204}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.47403499028047763, 0.5259650097195223}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if (input[18] <= 36118.5) {
                                            if (input[17] <= 10847.5) {
                                                memcpy(var0, (const double[]){0.3452720677146312, 0.6547279322853689}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.20312705872018974, 0.7968729412798102}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[15] <= 15307.5) {
                                                if (input[19] <= 282.19549560546875) {
                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                } else {
                                                    if (input[20] <= 6500.760009765625) {
                                                        memcpy(var0, (const double[]){0.2043264082244592, 0.7956735917755408}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.521956629996831, 0.478043370003169}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.25122157795296113, 0.7487784220470389}, 2 * sizeof(double));
                                            }
                                        }
                                    }
                                } else {
                                    if (input[19] <= 448.8710021972656) {
                                        memcpy(var0, (const double[]){0.9999150512241118, 0.00008494877588813945}, 2 * sizeof(double));
                                    } else {
                                        if (input[18] <= 114897.0) {
                                            if (input[6] <= 6.0) {
                                                memcpy(var0, (const double[]){0.9627420198848771, 0.03725798011512297}, 2 * sizeof(double));
                                            } else {
                                                if (input[15] <= 20796.0) {
                                                    memcpy(var0, (const double[]){0.5749939579473133, 0.4250060420526867}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.2042267050912584, 0.7957732949087416}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.9874473842453397, 0.012552615754660252}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[20] <= 497.3114929199219) {
                                    if (input[14] <= 6005.0) {
                                        if (input[20] <= 242.21050262451172) {
                                            memcpy(var0, (const double[]){0.24062639821029083, 0.7593736017897091}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.4918933525490903, 0.5081066474509097}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[17] <= 9648.5) {
                                            memcpy(var0, (const double[]){0.23408547103667018, 0.7659145289633298}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.7862796833773087, 0.21372031662269128}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[14] <= 26497.0) {
                                        if (input[25] <= 55.99864959716797) {
                                            if (input[14] <= 12411.0) {
                                                if (input[0] <= 34.5) {
                                                    memcpy(var0, (const double[]){0.46208616806170827, 0.5379138319382918}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.5944855886114195, 0.4055144113885805}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[16] <= 11853.0) {
                                                    if (input[25] <= 35.01124954223633) {
                                                        memcpy(var0, (const double[]){0.26852631578947367, 0.7314736842105263}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.4707923290436538, 0.5292076709563462}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.2441181378274654, 0.7558818621725346}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            if (input[12] <= 0.0014124599983915687) {
                                                if (input[11] <= 1.0000100135803223) {
                                                    memcpy(var0, (const double[]){0.28969237498177575, 0.7103076250182242}, 2 * sizeof(double));
                                                } else {
                                                    if (input[11] <= 1.0001999735832214) {
                                                        memcpy(var0, (const double[]){0.8632101489244346, 0.13678985107556535}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[9] <= 0.4909750074148178) {
                                                            if (input[5] <= 1074.0) {
                                                                if (input[5] <= 1070.0) {
                                                                    if (input[12] <= -0.001296164991799742) {
                                                                        if (input[11] <= 1.0194900035858154) {
                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[5] <= 938.0) {
                                                                                memcpy(var0, (const double[]){0.6258411843876177, 0.37415881561238223}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.20752864157119477, 0.7924713584288052}, 2 * sizeof(double));
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (input[10] <= -0.03429604880511761) {
                                                                            if (input[10] <= -0.10469300299882889) {
                                                                                if (input[8] <= 982.0) {
                                                                                    if (input[12] <= -0.001283119956497103) {
                                                                                        memcpy(var0, (const double[]){0.19954441913439636, 0.8004555808656036}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[10] <= -0.11913350224494934) {
                                                                                            if (input[10] <= -0.14259899407625198) {
                                                                                                memcpy(var0, (const double[]){0.5676464249597984, 0.4323535750402016}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                memcpy(var0, (const double[]){0.8203995389934691, 0.17960046100653093}, 2 * sizeof(double));
                                                                                            }
                                                                                        } else {
                                                                                            memcpy(var0, (const double[]){0.31524341580207504, 0.684756584197925}, 2 * sizeof(double));
                                                                                        }
                                                                                    }
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                if (input[9] <= 0.4503609985113144) {
                                                                                    memcpy(var0, (const double[]){0.19541182974018795, 0.804588170259812}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[12] <= -0.0005799905047751963) {
                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[12] <= 0.0009124345087911934) {
                                                                                            if (input[9] <= 0.4539714902639389) {
                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                memcpy(var0, (const double[]){0.3077262476713403, 0.6922737523286596}, 2 * sizeof(double));
                                                                                            }
                                                                                        } else {
                                                                                            memcpy(var0, (const double[]){0.6691926279352606, 0.3308073720647394}, 2 * sizeof(double));
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        } else {
                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                        }
                                                                    }
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.28590192644483364, 0.7140980735551664}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[12] <= -0.0013796149869449437) {
                                                                memcpy(var0, (const double[]){0.24575887808188193, 0.7542411219181181}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[11] <= 1.0003299713134766) {
                                                                    memcpy(var0, (const double[]){0.19666388657214345, 0.8033361134278566}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[10] <= 0.03971119970083237) {
                                                                        if (input[5] <= 1130.0) {
                                                                            if (input[5] <= 1126.0) {
                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.5230456852791878, 0.4769543147208122}, 2 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        if (input[11] <= 1.0025200247764587) {
                                                                            memcpy(var0, (const double[]){0.12543706293706294, 0.8745629370629371}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[12] <= 0.0011889300076290965) {
                                                                                memcpy(var0, (const double[]){0.4834752807845, 0.5165247192155}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.78487358326068, 0.21512641673931995}, 2 * sizeof(double));
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (input[12] <= 0.001414234982803464) {
                                                    memcpy(var0, (const double[]){0.13255233756372709, 0.8674476624362729}, 2 * sizeof(double));
                                                } else {
                                                    if (input[12] <= 0.0014168950146995485) {
                                                        memcpy(var0, (const double[]){0.9346485819975339, 0.06535141800246609}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.30286113049546404, 0.697138869504536}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if (input[20] <= 9757.419921875) {
                                            if (input[16] <= 20039.0) {
                                                if (input[20] <= 3985.050048828125) {
                                                    memcpy(var0, (const double[]){0.21449199264898924, 0.7855080073510108}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.4508731589087067, 0.5491268410912933}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.21112190840412526, 0.7888780915958747}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[16] <= 36009.0) {
                                                memcpy(var0, (const double[]){0.510662911175938, 0.48933708882406196}, 2 * sizeof(double));
                                            } else {
                                                if (input[14] <= 54991.0) {
                                                    if (input[20] <= 15340.35009765625) {
                                                        memcpy(var0, (const double[]){0.2562433297758805, 0.7437566702241195}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.49800498753117206, 0.5019950124688279}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.2526282620527658, 0.7473717379472342}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[1] <= 5.5) {
                            memcpy(var0, (const double[]){0.9915099015234771, 0.008490098476522939}, 2 * sizeof(double));
                        } else {
                            memcpy(var0, (const double[]){0.4192179448317672, 0.5807820551682328}, 2 * sizeof(double));
                        }
                    }
                }
            }
        } else {
            if (input[18] <= 128276.0) {
                memcpy(var0, (const double[]){0.9992527666614054, 0.0007472333385946019}, 2 * sizeof(double));
            } else {
                memcpy(var0, (const double[]){0.24310344827586206, 0.756896551724138}, 2 * sizeof(double));
            }
        }
    } else {
        if (input[3] <= 2.5) {
            if (input[20] <= 97.71885299682617) {
                if (input[18] <= 91328.5) {
                    if (input[3] <= 1.5) {
                        if (input[18] <= 44413.0) {
                            if (input[6] <= 48.0) {
                                if (input[7] <= 24.0) {
                                    if (input[18] <= 23941.5) {
                                        if (input[2] <= 2.5) {
                                            if (input[19] <= 187.07050323486328) {
                                                memcpy(var0, (const double[]){0.25009560229445504, 0.749904397705545}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.07763453948581757, 0.9223654605141824}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[19] <= 324.0429992675781) {
                                            if (input[6] <= 24.0) {
                                                memcpy(var0, (const double[]){0.9516339869281045, 0.048366013071895426}, 2 * sizeof(double));
                                            } else {
                                                if (input[19] <= 187.14049530029297) {
                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.22537719051635274, 0.7746228094836473}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.1048798669648489, 0.8951201330351511}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var0, (const double[]){0.05259968211496461, 0.9474003178850354}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[7] <= 24.0) {
                                if (input[19] <= 345.8889923095703) {
                                    if (input[3] <= 0.5) {
                                        memcpy(var0, (const double[]){0.5821309655937846, 0.4178690344062153}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.9797335334959655, 0.02026646650403453}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[6] <= 12.0) {
                                        memcpy(var0, (const double[]){0.9888010540184453, 0.011198945981554678}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.14356392674247026, 0.8564360732575297}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[19] <= 173.6719970703125) {
                                    memcpy(var0, (const double[]){0.9059645351961311, 0.09403546480386889}, 2 * sizeof(double));
                                } else {
                                    if (input[6] <= 48.0) {
                                        if (input[1] <= 2.5) {
                                            memcpy(var0, (const double[]){0.06057208566911025, 0.9394279143308898}, 2 * sizeof(double));
                                        } else {
                                            if (input[19] <= 346.59950256347656) {
                                                memcpy(var0, (const double[]){0.9798482693219536, 0.020151730678046466}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.027351110603551648, 0.9726488893964483}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[0] <= 24.5) {
                            if (input[25] <= 5.199275016784668) {
                                if (input[18] <= 42557.0) {
                                    memcpy(var0, (const double[]){0.8388074785245073, 0.16119252147549268}, 2 * sizeof(double));
                                } else {
                                    if (input[19] <= 355.79100036621094) {
                                        memcpy(var0, (const double[]){0.39344108250328885, 0.6065589174967111}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.9391249207355739, 0.060875079264426125}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[7] <= 24.0) {
                                    if (input[18] <= 50303.5) {
                                        if (input[25] <= 7.176959991455078) {
                                            if (input[19] <= 196.8395004272461) {
                                                memcpy(var0, (const double[]){0.32388392857142856, 0.6761160714285714}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.6777168494516451, 0.32228315054835494}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.29234575087310827, 0.7076542491268918}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[19] <= 393.99249267578125) {
                                            memcpy(var0, (const double[]){0.139927857263902, 0.860072142736098}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.5827702702702703, 0.4172297297297297}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var0, (const double[]){0.06915130862964086, 0.9308486913703591}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[20] <= 59.66390037536621) {
                                if (input[13] <= 1073.0499877929688) {
                                    memcpy(var0, (const double[]){0.39780018331805683, 0.6021998166819432}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.8280327401555565, 0.17196725984444353}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[0] <= 29.5) {
                                    if (input[18] <= 43008.0) {
                                        if (input[19] <= 167.69349670410156) {
                                            memcpy(var0, (const double[]){0.3427586206896552, 0.6572413793103449}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.819212808539026, 0.180787191460974}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[15] <= 1141.5) {
                                            memcpy(var0, (const double[]){0.080632565404139, 0.919367434595861}, 2 * sizeof(double));
                                        } else {
                                            if (input[8] <= 896.0) {
                                                memcpy(var0, (const double[]){0.7127286882055275, 0.2872713117944726}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.3396746330348153, 0.6603253669651846}, 2 * sizeof(double));
                                            }
                                        }
                                    }
                                } else {
                                    memcpy(var0, (const double[]){0.8972466081404629, 0.10275339185953711}, 2 * sizeof(double));
                                }
                            }
                        }
                    }
                } else {
                    if (input[0] <= 24.5) {
                        if (input[13] <= 2559.5150146484375) {
                            if (input[20] <= 22.959050178527832) {
                                memcpy(var0, (const double[]){0.5550097151446274, 0.4449902848553727}, 2 * sizeof(double));
                            } else {
                                if (input[15] <= 629.5) {
                                    memcpy(var0, (const double[]){0.14328358208955225, 0.8567164179104477}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.35945727975710423, 0.6405427202428958}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[18] <= 953919.0) {
                                if (input[2] <= 1.5) {
                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.20010829577487219, 0.7998917042251278}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var0, (const double[]){0.9987484355444305, 0.0012515644555694619}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[7] <= 24.0) {
                            if (input[18] <= 175031.0) {
                                if (input[3] <= 1.5) {
                                    if (input[19] <= 170.9134979248047) {
                                        memcpy(var0, (const double[]){0.37063291139240506, 0.6293670886075949}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.9097067852228221, 0.09029321477717794}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[20] <= 60.4195499420166) {
                                        memcpy(var0, (const double[]){0.6623467952581876, 0.3376532047418123}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.4429432701387376, 0.5570567298612624}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[19] <= 463.7430114746094) {
                                    memcpy(var0, (const double[]){0.2778821126157293, 0.7221178873842707}, 2 * sizeof(double));
                                } else {
                                    if (input[18] <= 417770.5) {
                                        memcpy(var0, (const double[]){0.8472906403940886, 0.15270935960591134}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.42218181818181816, 0.5778181818181818}, 2 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if (input[24] <= 255.46099853515625) {
                                if (input[11] <= 1.0526500344276428) {
                                    memcpy(var0, (const double[]){0.5708317861121426, 0.4291682138878574}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.8693818984547461, 0.13061810154525386}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var0, (const double[]){0.12689152233363718, 0.8731084776663628}, 2 * sizeof(double));
                            }
                        }
                    }
                }
            } else {
                if (input[18] <= 950028.5) {
                    if (input[24] <= 1029.3150024414062) {
                        if (input[7] <= 24.0) {
                            if (input[18] <= 23510.5) {
                                if (input[2] <= 2.5) {
                                    if (input[19] <= 183.78900146484375) {
                                        if (input[18] <= 12972.0) {
                                            memcpy(var0, (const double[]){0.9781468531468531, 0.021853146853146852}, 2 * sizeof(double));
                                        } else {
                                            if (input[0] <= 29.5) {
                                                memcpy(var0, (const double[]){0.15411279229711142, 0.8458872077028886}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.33528067056134114, 0.6647193294386589}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.9750617283950618, 0.02493827160493827}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[19] <= 183.68000030517578) {
                                        if (input[18] <= 11754.5) {
                                            memcpy(var0, (const double[]){0.09572899196113585, 0.9042710080388642}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.9892265193370166, 0.010773480662983425}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[20] <= 1527.8800048828125) {
                                            memcpy(var0, (const double[]){0.09959497059134294, 0.9004050294086571}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.04593696800211713, 0.9540630319978829}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[6] <= 6.0) {
                                    if (input[19] <= 367.3554992675781) {
                                        memcpy(var0, (const double[]){0.985072855854573, 0.01492714414542693}, 2 * sizeof(double));
                                    } else {
                                        if (input[18] <= 47018.5) {
                                            if (input[3] <= 1.5) {
                                                if (input[19] <= 734.6640014648438) {
                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.04948400493356856, 0.9505159950664315}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[19] <= 734.7460021972656) {
                                                memcpy(var0, (const double[]){0.9853081964798586, 0.014691803520141395}, 2 * sizeof(double));
                                            } else {
                                                if (input[18] <= 59368.5) {
                                                    memcpy(var0, (const double[]){0.06874856134427991, 0.9312514386557201}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.9708177807940278, 0.029182219205972176}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if (input[2] <= 2.5) {
                                        if (input[0] <= 34.5) {
                                            if (input[20] <= 260.96400451660156) {
                                                if (input[0] <= 29.5) {
                                                    if (input[5] <= 984.0) {
                                                        if (input[0] <= 24.5) {
                                                            memcpy(var0, (const double[]){0.15558718463942844, 0.8444128153605716}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.3482362357784003, 0.6517637642215997}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.1271713625698019, 0.8728286374301981}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[15] <= 5554.5) {
                                                        if (input[13] <= 1874.625) {
                                                            memcpy(var0, (const double[]){0.19958071278825995, 0.80041928721174}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[20] <= 191.9990005493164) {
                                                                memcpy(var0, (const double[]){0.583727465898965, 0.41627253410103504}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.38398544131028206, 0.6160145586897179}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.2534942335599175, 0.7465057664400825}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                if (input[24] <= 510.1094970703125) {
                                                    if (input[24] <= 240.21099853515625) {
                                                        memcpy(var0, (const double[]){0.13467884515183767, 0.8653211548481623}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[3] <= 1.5) {
                                                            if (input[21] <= 8136.0) {
                                                                memcpy(var0, (const double[]){0.21107544141252008, 0.7889245585874799}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.6498041775456919, 0.3501958224543081}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.09201405295428898, 0.907985947045711}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    if (input[6] <= 12.0) {
                                                        memcpy(var0, (const double[]){0.08663366336633663, 0.9133663366336634}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.22074672510507465, 0.7792532748949254}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[20] <= 806.5580139160156) {
                                                if (input[18] <= 248109.5) {
                                                    if (input[11] <= 1.0146650075912476) {
                                                        memcpy(var0, (const double[]){0.3977243341091285, 0.6022756658908714}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[15] <= 13505.0) {
                                                            if (input[13] <= 3417.02001953125) {
                                                                memcpy(var0, (const double[]){0.31773743016759776, 0.6822625698324022}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.6737599848451362, 0.3262400151548638}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.38853589292956603, 0.611464107070434}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.18924933241024627, 0.8107506675897538}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[20] <= 1564.0400390625) {
                                                    memcpy(var0, (const double[]){0.24661096224889412, 0.7533890377511059}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.15292097528288381, 0.8470790247171162}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    } else {
                                        if (input[18] <= 38125.5) {
                                            if (input[19] <= 332.6054992675781) {
                                                memcpy(var0, (const double[]){0.9636363636363636, 0.03636363636363636}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.08163099210547733, 0.9183690078945227}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[6] <= 12.0) {
                                                if (input[19] <= 596.7634887695312) {
                                                    memcpy(var0, (const double[]){0.9946368715083799, 0.005363128491620112}, 2 * sizeof(double));
                                                } else {
                                                    if (input[18] <= 59207.0) {
                                                        memcpy(var0, (const double[]){0.11039755351681957, 0.8896024464831804}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.9884796978281397, 0.011520302171860246}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                if (input[11] <= 3.7984849214553833) {
                                                    if (input[0] <= 34.5) {
                                                        memcpy(var0, (const double[]){0.28894613583138173, 0.7110538641686183}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[20] <= 570.2124938964844) {
                                                            memcpy(var0, (const double[]){0.7754098360655738, 0.22459016393442624}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.3709874034945144, 0.6290125965054856}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.12350240734520211, 0.8764975926547979}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[18] <= 137676.5) {
                                if (input[7] <= 48.0) {
                                    if (input[25] <= 37.39444923400879) {
                                        if (input[0] <= 34.5) {
                                            memcpy(var0, (const double[]){0.07206466726559496, 0.927935332734405}, 2 * sizeof(double));
                                        } else {
                                            if (input[3] <= 1.5) {
                                                memcpy(var0, (const double[]){0.1082978511313957, 0.8917021488686043}, 2 * sizeof(double));
                                            } else {
                                                if (input[25] <= 23.856999397277832) {
                                                    memcpy(var0, (const double[]){0.6659196414278854, 0.3340803585721146}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.23632047030449202, 0.763679529695508}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.040185172174211733, 0.9598148278257883}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[1] <= 3.5) {
                                    if (input[9] <= 0.42238299548625946) {
                                        memcpy(var0, (const double[]){0.4802811867032051, 0.5197188132967949}, 2 * sizeof(double));
                                    } else {
                                        if (input[0] <= 34.5) {
                                            memcpy(var0, (const double[]){0.18787499050656944, 0.8121250094934306}, 2 * sizeof(double));
                                        } else {
                                            if (input[20] <= 538.6495056152344) {
                                                if (input[13] <= 4857.625) {
                                                    memcpy(var0, (const double[]){0.23852385238523852, 0.7614761476147615}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.7737340228314957, 0.22626597716850425}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.24986588536293483, 0.7501341146370651}, 2 * sizeof(double));
                                            }
                                        }
                                    }
                                } else {
                                    if (input[19] <= 536.8699951171875) {
                                        if (input[6] <= 6.0) {
                                            memcpy(var0, (const double[]){0.7808631057658295, 0.2191368942341705}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.12246087170288898, 0.877539128297111}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.07147438315853015, 0.9285256168414698}, 2 * sizeof(double));
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[2] <= 2.5) {
                            if (input[7] <= 24.0) {
                                memcpy(var0, (const double[]){0.9777419827207497, 0.022258017279250256}, 2 * sizeof(double));
                            } else {
                                if (input[1] <= 1.5) {
                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.05548033365093693, 0.944519666349063}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var0, (const double[]){0.0554025946044492, 0.9445974053955508}, 2 * sizeof(double));
                        }
                    }
                } else {
                    memcpy(var0, (const double[]){0.9975349942776652, 0.0024650057223347126}, 2 * sizeof(double));
                }
            }
        } else {
            if (input[7] <= 24.0) {
                if (input[11] <= 1.0000799894332886) {
                    memcpy(var0, (const double[]){0.9910387437677031, 0.008961256232296964}, 2 * sizeof(double));
                } else {
                    if (input[11] <= 1.000594973564148) {
                        if (input[24] <= 509.468994140625) {
                            if (input[15] <= 7958.5) {
                                if (input[22] <= 10132.0) {
                                    if (input[18] <= 36451.5) {
                                        memcpy(var0, (const double[]){0.17207514944491886, 0.8279248505550811}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.3482710926694329, 0.6517289073305671}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var0, (const double[]){0.47669177142537167, 0.5233082285746283}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var0, (const double[]){0.21793867120954002, 0.78206132879046}, 2 * sizeof(double));
                            }
                        } else {
                            memcpy(var0, (const double[]){0.14175702741902066, 0.8582429725809794}, 2 * sizeof(double));
                        }
                    } else {
                        if (input[11] <= 1.0016250014305115) {
                            if (input[4] <= 4414.0) {
                                memcpy(var0, (const double[]){0.9953285805932793, 0.0046714194067207}, 2 * sizeof(double));
                            } else {
                                memcpy(var0, (const double[]){0.3474025974025974, 0.6525974025974026}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[11] <= 1.0031750202178955) {
                                if (input[24] <= 507.5155029296875) {
                                    if (input[15] <= 5676.5) {
                                        if (input[18] <= 34349.0) {
                                            memcpy(var0, (const double[]){0.22787793095322256, 0.7721220690467774}, 2 * sizeof(double));
                                        } else {
                                            if (input[6] <= 6.0) {
                                                if (input[19] <= 268.7695007324219) {
                                                    memcpy(var0, (const double[]){0.9988197108291531, 0.0011802891708468574}, 2 * sizeof(double));
                                                } else {
                                                    if (input[18] <= 68821.0) {
                                                        memcpy(var0, (const double[]){0.17562568008705115, 0.8243743199129488}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.7988797012536677, 0.20112029874633236}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.3828551782098789, 0.6171448217901211}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.2390086759160962, 0.7609913240839038}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var0, (const double[]){0.1394763142114731, 0.8605236857885269}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[11] <= 1.0052450299263) {
                                    if (input[4] <= 4414.0) {
                                        memcpy(var0, (const double[]){0.995868632345166, 0.004131367654834069}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.39037433155080214, 0.6096256684491979}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[12] <= 0.00008143575178110041) {
                                        if (input[11] <= 1.0651800036430359) {
                                            if (input[24] <= 510.4844970703125) {
                                                if (input[15] <= 11720.5) {
                                                    if (input[12] <= -0.001403439964633435) {
                                                        memcpy(var0, (const double[]){0.9953600593912398, 0.0046399406087602076}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[10] <= 0.0072202011942863464) {
                                                            if (input[18] <= 46088.5) {
                                                                memcpy(var0, (const double[]){0.29280421216848673, 0.7071957878315133}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[6] <= 6.0) {
                                                                    if (input[19] <= 360.1289978027344) {
                                                                        memcpy(var0, (const double[]){0.9994289909454278, 0.0005710090545721511}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[18] <= 92541.0) {
                                                                            memcpy(var0, (const double[]){0.18719252213840604, 0.812807477861594}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[19] <= 723.1289978027344) {
                                                                                memcpy(var0, (const double[]){0.9996386630532972, 0.0003613369467028004}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[18] <= 119215.5) {
                                                                                    memcpy(var0, (const double[]){0.2266624040920716, 0.7733375959079284}, 2 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.9970501474926253, 0.0029498525073746312}, 2 * sizeof(double));
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (input[10] <= -0.1371839940547943) {
                                                                        if (input[5] <= 932.0) {
                                                                            memcpy(var0, (const double[]){0.39945242984257356, 0.6005475701574264}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.9995026112907237, 0.0004973887092762995}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.32774493475117594, 0.6722550652488241}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            if (input[11] <= 1.011905014514923) {
                                                                memcpy(var0, (const double[]){0.9957300613496932, 0.004269938650306749}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[12] <= -0.0013638599775731564) {
                                                                    memcpy(var0, (const double[]){0.9959753787878788, 0.004024621212121212}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[10] <= 0.1371839940547943) {
                                                                        memcpy(var0, (const double[]){0.3425557899411569, 0.6574442100588431}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[5] <= 1268.0) {
                                                                            memcpy(var0, (const double[]){0.9982273993416054, 0.0017726006583945303}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[12] <= -0.0005510810078703798) {
                                                                                memcpy(var0, (const double[]){0.3417843743103068, 0.6582156256896933}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.9971550497866287, 0.002844950213371266}, 2 * sizeof(double));
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (input[12] <= -0.001403439964633435) {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[13] <= 24140.150390625) {
                                                            if (input[18] <= 71317.5) {
                                                                memcpy(var0, (const double[]){0.2125, 0.7875}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[6] <= 6.0) {
                                                                    if (input[19] <= 557.2439880371094) {
                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[18] <= 118565.0) {
                                                                            memcpy(var0, (const double[]){0.1668029435813573, 0.8331970564186427}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                        }
                                                                    }
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.36706068425871974, 0.6329393157412803}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.19346193491385658, 0.8065380650861435}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (input[12] <= -0.001403439964633435) {
                                                    memcpy(var0, (const double[]){0.9846390168970814, 0.015360983102918587}, 2 * sizeof(double));
                                                } else {
                                                    if (input[5] <= 1108.0) {
                                                        memcpy(var0, (const double[]){0.16973964063072974, 0.8302603593692702}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[10] <= 0.0974729023873806) {
                                                            memcpy(var0, (const double[]){0.9597806215722121, 0.04021937842778794}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[12] <= -0.0013638599775731564) {
                                                                memcpy(var0, (const double[]){0.9617137648131268, 0.03828623518687329}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.21271320480485614, 0.7872867951951439}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[11] <= 1.2125750184059143) {
                                                if (input[12] <= -0.0002060055048787035) {
                                                    memcpy(var0, (const double[]){0.9908281468687651, 0.009171853131234925}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.30190718029066943, 0.6980928197093306}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[11] <= 1.4520300030708313) {
                                                    if (input[12] <= -0.00020490759379754309) {
                                                        if (input[24] <= 510.5465087890625) {
                                                            if (input[8] <= 1116.0) {
                                                                if (input[8] <= 604.0) {
                                                                    if (input[10] <= -0.46931399405002594) {
                                                                        if (input[12] <= -0.00119570002425462) {
                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.29154078549848944, 0.7084592145015106}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.9975961538461539, 0.002403846153846154}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.3133545512412476, 0.6866454487587524}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                if (input[9] <= 0.7057760059833527) {
                                                                    memcpy(var0, (const double[]){0.9950576606260296, 0.004942339373970346}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.47455242516970914, 0.5254475748302909}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.21154044307058217, 0.7884595569294178}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.9913392141138733, 0.008660785886126704}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[8] <= 1916.0) {
                                                        if (input[8] <= 1744.0) {
                                                            if (input[10] <= 0.0072200000286102295) {
                                                                if (input[11] <= 2.007480025291443) {
                                                                    memcpy(var0, (const double[]){0.9981275599765945, 0.0018724400234055004}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[5] <= 184.0) {
                                                                        memcpy(var0, (const double[]){0.8724383103304056, 0.1275616896695943}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.3631137724550898, 0.6368862275449102}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.36297271421732885, 0.6370272857826711}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.9961764930794524, 0.003823506920547526}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[5] <= 2072.0) {
                                                            memcpy(var0, (const double[]){0.3866309537673227, 0.6133690462326773}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if (input[11] <= 1.0743950009346008) {
                                            if (input[11] <= 1.0078499913215637) {
                                                memcpy(var0, (const double[]){0.27856033566738414, 0.7214396643326159}, 2 * sizeof(double));
                                            } else {
                                                if (input[4] <= 4414.0) {
                                                    memcpy(var0, (const double[]){0.9946584961062173, 0.0053415038937827146}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.3617181612660136, 0.6382818387339865}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            if (input[11] <= 1.1943100094795227) {
                                                if (input[12] <= 0.00018092169921146706) {
                                                    memcpy(var0, (const double[]){0.9960499490316004, 0.003950050968399592}, 2 * sizeof(double));
                                                } else {
                                                    if (input[12] <= 0.0014144000015221536) {
                                                        if (input[24] <= 510.7965087890625) {
                                                            if (input[15] <= 10854.5) {
                                                                if (input[18] <= 42603.0) {
                                                                    memcpy(var0, (const double[]){0.2507140590288797, 0.7492859409711203}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[6] <= 6.0) {
                                                                        if (input[19] <= 332.96299743652344) {
                                                                            memcpy(var0, (const double[]){0.999866879659212, 0.00013312034078807243}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[18] <= 84648.5) {
                                                                                memcpy(var0, (const double[]){0.23595835166446694, 0.7640416483355331}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[19] <= 666.8240051269531) {
                                                                                    memcpy(var0, (const double[]){0.9992270033496522, 0.0007729966503478485}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[18] <= 145038.5) {
                                                                                        memcpy(var0, (const double[]){0.2209660842754368, 0.7790339157245632}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.9963768115942029, 0.0036231884057971015}, 2 * sizeof(double));
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.4150211922637388, 0.5849788077362612}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.2874828785164893, 0.7125171214835107}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.19053131149438593, 0.809468688505614}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.9959205391982973, 0.004079460801702731}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                if (input[11] <= 1.4784899950027466) {
                                                    if (input[11] <= 1.2320600152015686) {
                                                        if (input[10] <= 0.010830491781234741) {
                                                            memcpy(var0, (const double[]){0.989190527271227, 0.010809472728773}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.3136087484811665, 0.6863912515188335}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.9905869441337245, 0.009413055866275511}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[12] <= 0.0002186345009249635) {
                                                        memcpy(var0, (const double[]){0.9979226175019476, 0.002077382498052454}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[12] <= 0.00027411400515120476) {
                                                            memcpy(var0, (const double[]){0.27267178235088946, 0.7273282176491106}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[12] <= 0.0003958025044994429) {
                                                                memcpy(var0, (const double[]){0.9960018814675446, 0.003998118532455315}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[11] <= 6.35682487487793) {
                                                                    if (input[9] <= 0.8592054843902588) {
                                                                        if (input[12] <= 0.0013863799977116287) {
                                                                            if (input[11] <= 1.5468299984931946) {
                                                                                memcpy(var0, (const double[]){0.9975550122249389, 0.0024449877750611247}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.4218150388936906, 0.5781849611063095}, 2 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.9957210098416773, 0.004278990158322636}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.9984982935153583, 0.0015017064846416382}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.25131964809384166, 0.7486803519061583}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (input[4] <= 4414.0) {
                    memcpy(var0, (const double[]){0.9858620789863707, 0.014137921013629363}, 2 * sizeof(double));
                } else {
                    memcpy(var0, (const double[]){0.09026845637583893, 0.9097315436241611}, 2 * sizeof(double));
                }
            }
        }
    }
    memcpy(output, var0, 2 * sizeof(double));
}
