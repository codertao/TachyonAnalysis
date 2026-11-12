
/* sweep */

void ModelRef_Release(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (((param_1 != (int *)0x0) && (*param_1 != 0)) &&
     (piVar1 = (int *)(param_1[2] + 8 + param_1[1] * 0x28), *piVar1 != 0)) {
    iVar2 = __stricmp(piVar1 + 1,*param_1 + 0x70);
    if (iVar2 == 0) {
      ModelPool_FindByName(*param_1 + 0x70,param_1[2]);
    }
    iVar2 = Pak_UnloadModel(*param_1);
    if (iVar2 == 0) {
      ModelPool_ClearSlot(param_1);
    }
  }
  return;
}

