
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* store scene gamma/sat (0x5aed50/54) and sector RGB (-> 0x669200 light ramp) */

void Scene_SetPalParams(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                       undefined4 param_5)

{
  DAT_005aed54 = param_2;
  DAT_005aed50 = param_1;
  _DAT_005aed58 = param_3;
  _DAT_005aed5c = param_4;
  _DAT_005aed60 = param_5;
  Light_SetSectorTint(param_3,param_4,param_5);
  return;
}

