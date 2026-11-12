
/* refine: Pak_Unload(model name +0x70) */

undefined4 Pak_UnloadModel(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  uVar1 = Pak_Unload(param_1 + 0x70);
  return uVar1;
}

