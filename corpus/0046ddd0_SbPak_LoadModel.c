
/* sweep */

void SbPak_LoadModel(undefined4 param_1,undefined4 param_2)

{
  Pak_SetMemPools(0xa104,0xa104);
  Pak_SetForcedTexFlags(0);
  Pak_Load(param_1,param_2,param_2);
  return;
}

