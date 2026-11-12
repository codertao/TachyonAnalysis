
/* sweep */

undefined4 Ship_LoadFxModel(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x29c) != 0) {
    return 1;
  }
  if (*(char *)(param_1 + 0x2a8) != '\0') {
    iVar1 = __stricmp(param_1 + 0x2a8,&DAT_0053f1e4);
    if (iVar1 != 0) {
      ModelPool_Load(param_1 + 0x29c,param_1 + 0x2a8,0,param_1 + 0x2b8,&g_FxModelPool,1);
      return 1;
    }
  }
  return 0;
}

