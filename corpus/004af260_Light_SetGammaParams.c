
/* refine: gamma (spacesav[0x38]), brightness, contrast (0x6691f4..fc); rebuild shade ramp */

void Light_SetGammaParams(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  DAT_006691f4 = param_1;
  DAT_006691f8 = param_2;
  DAT_006691fc = param_3;
  Light_BuildShadeRamp();
  return;
}

