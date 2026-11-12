
/* sweep: guess */

undefined4
Var_GetStrByPath(undefined4 param_1,undefined4 param_2,undefined4 param_3,char *param_4,
                size_t param_5,undefined4 *param_6)

{
  int iVar1;
  int iVar2;
  char *_Source;
  
  if (DAT_0056aa94 != 0) {
    iVar1 = Var_FindSection(param_2);
    if (iVar1 != 0) {
      iVar2 = Var_FindKey(iVar1,param_3);
      if (iVar2 != 0) {
        iVar1 = Var_GetByIndex(param_1,*(undefined4 *)(iVar1 + 0x30),*(undefined4 *)(iVar2 + 4),
                               param_6);
        if (iVar1 != 0) {
          if (*(int *)(iVar2 + 8) == 0) {
            *param_4 = '\0';
            return 1;
          }
          _Source = (char *)Var_GetKeyByIndex(*(int *)(iVar2 + 8),*param_6);
          if (_Source != (char *)0x0) {
            _strncpy(param_4,_Source,param_5);
            return 1;
          }
          uRam00000000 = 0;
          return 1;
        }
      }
    }
  }
  return 0;
}

