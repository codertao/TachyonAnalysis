
/* sweep: guess */

undefined4 Pak_BindAnimTexture(undefined4 param_1)

{
  undefined4 uVar1;
  
  if ((DAT_0062c0f0 != 0) && ((*(uint *)(DAT_0062c0f0 + 0x34) & 0x7000) == 0x2000)) {
    DAT_0062c0f0 = 0;
    return 0;
  }
  uVar1 = Pak_BindTextureByName(param_1,param_1);
  return uVar1;
}

