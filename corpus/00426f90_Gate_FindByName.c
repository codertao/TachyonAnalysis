
/* sweep */

int Gate_FindByName(undefined4 param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  do {
    for (iVar1 = *param_2; iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
      if (*(short *)(iVar1 + 0x76) == 10) {
        iVar2 = __stricmp(*(int *)(iVar1 + 0xf0) + 0x38,param_1);
        if (iVar2 == 0) {
          if (param_3 == -1) {
            return iVar1;
          }
          iVar2 = *(int *)(*(int *)(iVar1 + 0xf0) + 0x20);
        }
        else {
          if ((param_3 == -1) || ((*(uint *)(*(int *)(iVar1 + 0xf0) + 0x24) & 0x800) == 0))
          goto LAB_00426ff0;
          iVar2 = *(int *)(*(int *)(iVar1 + 0xf0) + 0x20);
        }
        if (param_3 == iVar2) {
          return iVar1;
        }
      }
LAB_00426ff0:
    }
    if (param_3 == -1) {
      return 0;
    }
    param_3 = -1;
  } while( true );
}

