
/* sweep: "MNU POLYFONT" */

int Mnu_LoadPolyFont(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = param_2;
  param_2 = Mnu_FindPolyFont(param_1,param_2);
  if (param_2 != 0) {
    return param_2 + 0x20;
  }
  Mem_AllocZeroTagged(&param_2,0x5c,4,s_MNU_POLYFONT_0053fef4,0xa000);
  if (param_2 != 0) {
    str_sprintf(param_2,uVar1);
    PolyFont_Load(uVar1,param_2 + 0x20,0x20000,0xa000);
    *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)(param_1 + 0x3c);
    *(int *)(param_1 + 0x3c) = param_2;
    return param_2 + 0x20;
  }
  return 0;
}

