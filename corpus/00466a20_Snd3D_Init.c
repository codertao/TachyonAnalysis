
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

void Snd3D_Init(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  clr_bytes(&DAT_00589760,0x50);
  if (DAT_005b2b50 != -1) {
    iVar1 = Mss3D_Init(DAT_005b2b50,&DAT_00589788);
    if (iVar1 != 0) {
      DAT_00589798 = Mss3D_AllocObjects(param_2);
      Snd3D_InitChannels();
      Snd3D_InitPool(param_1);
      _DAT_00589784 = 1;
      return;
    }
    iVar1 = Mss3D_Init(0,&DAT_00589788);
    if (iVar1 != 0) {
      DAT_00589798 = Mss3D_AllocObjects(param_2,&DAT_00589788);
      Snd3D_InitChannels();
      Snd3D_InitPool(param_1);
      _DAT_00589784 = 1;
    }
  }
  return;
}

